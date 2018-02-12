int play(char* sir, char* ascuns, int nrlines, int nrch)
{

	int rowNumber, columnsNumber;
	initscr();
	clear();
	noecho();
	cbreak();
	curs_set(0);

	getmaxyx(stdscr, rowNumber, columnsNumber);

	int missed = 0, boring = 0;
	char greseli[7] = {0};

	char c;
	int i, ok, game_return = 0; 

	while(strchr(ascuns,'_') != 0)
	{
		clear();
		drawing(missed);
		mvprintw(rowNumber/2 + rowNumber/3, columnsNumber/2 - strlen(ascuns)/2, "%s", ascuns);
		mvprintw(rowNumber/2 + rowNumber/3 + 1, columnsNumber/2 - strlen(greseli)/2, "%s", greseli);
		mvprintw(rowNumber/2 + rowNumber/3 + 6, 0, "Numar total de linii:%d", nrlines);
		mvprintw(rowNumber/2 + rowNumber/3 + 5, 0, "Numar total de caractere:%d", nrch);
		
		timepanel(c);
		halfdelay(70);
        c = getch();
        while(c==ERR)
        {
        	c=randomch(95);
        	if(strchr(ascuns,c) || strchr(greseli,c))
        		c=ERR;
        }
        
        // if(c == 'Q')
        // {
        // 	//boring = 1;
        // 	clear();
        // 	refresh();
        // 	//game_return = MainMenu();
        	
        // 	break;	
        // }

		ok = 0;
		for(i = 0; i < strlen(sir); i++)
        	{
			if(ascuns[i] == '_')
				if(sir[i] == c)
				{
					ok = 1;
					ascuns[i] = sir[i];
				}
        	}	

        if(strchr(ascuns, c) != NULL)
        	ok = 1;
		if(ok == 0)
		{	
            if(strchr(greseli, c) == NULL)
			{
                greseli[missed] = c;
				missed++;
            }
		}
		
		drawing(missed);
	
	        if(missed == 6)
        		break;
	}
	if ( c != 'Q' )
	{

		clear();
		drawing(missed);
		mvprintw(rowNumber/2 + rowNumber/3+1, columnsNumber/2 - strlen(ascuns)/2, "%s", ascuns);
		mvprintw(rowNumber/2 + rowNumber/3 + 2, columnsNumber/2 - strlen(greseli)/2, "%s", greseli);
		timepanel(c);
		mvprintw(rowNumber/2 + rowNumber/3 + 6, 0, "Numar total de linii:%d", nrlines);
		mvprintw(rowNumber/2 + rowNumber/3 + 5, 0, "Numar total de caractere:%d", nrch);


	if(missed == 6)
		{
		
		mvprintw(rowNumber/2 + rowNumber/3 +3, columnsNumber/2 -4, "Game Over");
		}
	else 
	{
		mvprintw(rowNumber/2 + rowNumber/3 +3, columnsNumber/2 - 1, "WIN");
	}

	getch();
	}
	return 0;
}
