
int MainMenu()
{
	//lista elementelor din meniu
	char *options[] = {
						"New Game",
						"Resume Game",
						"Quit",
						};

	char *aux=""; // al doilea arg pentru new_item

	ITEM **items_menu;
	int c;
	MENU *menu;//obiectul meniu
	int n_options,i;//nr de elem
	//ITEM *cur_item;

	WINDOW *menu_win;
	menu_win = subwin(stdscr,5,16,4,COLS/2-6);
	
	//Initializare curses
	initscr();
	start_color();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	//curs_set(0); //ascundere cursor

	//perechi culori pentru meniu
	init_pair(1, COLOR_RED,COLOR_BLACK);
	init_pair(2, COLOR_YELLOW,COLOR_BLACK);

	//initializare menu
	n_options = ARRAY_SIZE(options); // nr elem ale meniului
	
	items_menu = (ITEM **)calloc(n_options + 1, sizeof(ITEM *));

	//create items
	for(i=0;i<n_options;++i)
		items_menu[i] = new_item(options[i],aux);

	items_menu[n_options] = (ITEM *)NULL;

	//creare meniu
	menu = new_menu((ITEM **)items_menu);

  /* Set main window and sub window */ 
   	set_menu_win(menu, menu_win); 
  

    /* Set menu mark to the string " * " */ 
    set_menu_mark(menu, " -> "); 


	/* culorile pentru elementele de meniu */
	set_menu_fore(menu, COLOR_PAIR(1) | A_REVERSE);
	set_menu_back(menu, COLOR_PAIR(2));
	//set_menu_grey(meniu_principal, COLOR_PAIR(3));//pentru elemente neselectabile

	mvprintw(LINES - 5, 1, "---> THE AMAZING HANGMAN <---");
	mvprintw(LINES - 3, 1, "Press <ENTER> to select");
	mvprintw(LINES - 2, 1, "UP and DOWN arrow keys to naviagate");
	
	/* Postez meniul */
	post_menu(menu);
	refresh();
	
	int ok=1;
	while(ok) 

    {   
        c=getch();    
        switch(c) 
        {      
        	case KEY_DOWN: 
                 	menu_driver(menu, REQ_DOWN_ITEM);        
                 	break;        
            case KEY_UP:        
                    menu_driver(menu, REQ_UP_ITEM);        
                    break; 
            case 10: /* Enter */
                  	if ( strcmp (item_name (current_item (menu)),"Resume Game") == 0 ) 
                    {

                        move(20, 0);        
                        clrtoeol();        
                        mvprintw(20, 2, "WELCOME BACK! ->  %s", item_name(current_item(menu)));        
                        pos_menu_cursor(menu);
                        return 2; 

                    } 

                    if ( strcmp (item_name (current_item (menu)),"New Game") == 0 ) 
                    	{
                    		clear();
                    		unpost_menu(menu);        
					       	for(i = 0; i < n_options; ++i) 
                				free_item(items_menu[i]);        
        					free_menu(menu);                                     
                    		return 1;
                    	}


                    if ( strcmp (item_name (current_item (menu)), "Quit") == 0 )
					{
						ok=0;   
						unpost_menu(menu);        
				       	for(i = 0; i < n_options; ++i) 
                			free_item(items_menu[i]);        
        				free_menu(menu);                                          
						return 0;
					}
					
		}		    
                                      
               
    }  

}

