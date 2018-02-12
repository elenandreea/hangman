void drawing(int mistakes)
{

	int nr_lines=0 , nr_cols=0;
	getmaxyx(stdscr, nr_lines, nr_cols);
	int x,y,i;
	x=nr_cols/4;
	y=nr_lines/5;
	int max_x= nr_cols/2;
	int min_y= (nr_lines/6)*5;
	int margine_cap_stg= max_x-3 ;
	int margine_cap_dr= max_x+3;

	

	switch(mistakes)
	{
		case 0:
		{
			// Linia orizontala de sus
            for(i = x; i <= max_x; i++)
                mvprintw(y, i, "_");
            // Linia verticala din dreapta
            for(i = y + 1; i <= min_y/3; i++)
                mvprintw(i, max_x, "|");
            // Linia verticala din stanga
            for(i = y + 1; i < min_y; i++)
                mvprintw(i, x, "|");
            // Linia orizontala de jos
            for(i = x; i <= max_x ; i++)
               	mvprintw(min_y, i, "_");

		}
		break;

		case 1:
		{
			// Linia orizontala de sus
            for(i = x; i <= max_x; i++)
                mvprintw(y, i, "_");
            // Linia verticala din dreapta
            for(i = y + 1; i <= min_y/3; i++)
                mvprintw(i, max_x, "|");
            // Linia verticala din stanga
            for(i = y + 1; i < min_y; i++)
                mvprintw(i, x, "|");
            // Linia orizontala de jos
            for(i = x; i <= max_x ; i++)
                mvprintw(min_y, i, "_");
            //cap 
            for(i = margine_cap_stg; i<=margine_cap_dr ; i++)
            	{
            	mvprintw((min_y/3)+1, i, "_");
            	mvprintw((min_y/3)+4, i, "_");
            	}
            for(i=min_y/3+2;i<min_y/3+5;i++)
            {
            	mvprintw(i,margine_cap_stg,"|");
            	mvprintw(i,margine_cap_dr,"|");
            }
            //ochii
            mvprintw(min_y/3+2,margine_cap_stg+2,"x");
            mvprintw(min_y/3+2,margine_cap_dr-2,"x");
            //gura
            mvprintw(min_y/3+3,margine_cap_stg+2,"__");
        }
		
		break;

		case 2:
		{
			// Linia orizontala de sus
            for(i = x; i <= max_x; i++)
                mvprintw(y, i, "_");
            // Linia verticala din dreapta
            for(i = y + 1; i <= min_y/3; i++)
                mvprintw(i, max_x, "|");
            // Linia verticala din stanga
            for(i = y + 1; i < min_y; i++)
                mvprintw(i, x, "|");
            // Linia orizontala de jos
            for(i = x; i <= max_x ; i++)
                mvprintw(min_y, i, "_");
            //cap 
            for(i = margine_cap_stg; i<=margine_cap_dr ; i++)
            	{
            	mvprintw((min_y/3)+1, i, "_");
            	mvprintw((min_y/3)+4, i, "_");
            	}
            for(i=min_y/3+2;i<min_y/3+5;i++)
            {
            	mvprintw(i,margine_cap_stg,"|");
            	mvprintw(i,margine_cap_dr,"|");
            }
            //ochii
            mvprintw(min_y/3+2,margine_cap_stg+2,"x");
            mvprintw(min_y/3+2,margine_cap_dr-2,"x");
            //gura
            mvprintw(min_y/3+3,margine_cap_stg+2,"__");
            mvprintw(min_y/3+5,max_x,"|");
            //trunchi
            for(i = margine_cap_stg; i<=margine_cap_dr ; i++)
            {
            	mvprintw((min_y/3)+6, i, "_");
            	mvprintw((min_y/3)*2, i, "_");
            }
            for(i = (min_y/3)+7;i<(min_y/3)*2+1;i++)
            {
            	mvprintw( i,margine_cap_stg, "|");
            	mvprintw(i,margine_cap_dr, "|");

            }
		}
		break;

		case 3:
		{

			// Linia orizontala de sus
            for(i = x; i <= max_x; i++)
                mvprintw(y, i, "_");
            // Linia verticala din dreapta
            for(i = y + 1; i <= min_y/3; i++)
                mvprintw(i, max_x, "|");
            // Linia verticala din stanga
            for(i = y + 1; i < min_y; i++)
                mvprintw(i, x, "|");
            // Linia orizontala de jos
            for(i = x; i <= max_x ; i++)
                mvprintw(min_y, i, "_");
            //cap 
            for(i = margine_cap_stg; i<=margine_cap_dr ; i++)
            	{
            	mvprintw((min_y/3)+1, i, "_");
            	mvprintw((min_y/3)+4, i, "_");
            	}
            for(i=min_y/3+2;i<min_y/3+5;i++)
            {
            	mvprintw(i,margine_cap_stg,"|");
            	mvprintw(i,margine_cap_dr,"|");
            }
            //ochii
            mvprintw(min_y/3+2,margine_cap_stg+2,"x");
            mvprintw(min_y/3+2,margine_cap_dr-2,"x");
            //gura
            mvprintw(min_y/3+3,margine_cap_stg+2,"__");
            mvprintw(min_y/3+5,max_x,"|");
            //trunchi
            for(i = margine_cap_stg; i<=margine_cap_dr ; i++)
            {
            	mvprintw((min_y/3)+6, i, "_");
            	mvprintw((min_y/3)*2, i, "_");
            }
            for(i = (min_y/3)+7;i<(min_y/3)*2+1;i++)
            {
            	mvprintw( i,margine_cap_stg, "|");
            	mvprintw(i,margine_cap_dr, "|");

            }
           //mana
            mvprintw( (min_y/3)+7,margine_cap_stg-1, "_");
           	for(i = (min_y/3)+8;i<(min_y/3)*2+3;i++)
           		mvprintw( i,margine_cap_stg-2, "|");

		}
		break;

		case 4:
		{
			// Linia orizontala de sus
            for(i = x; i <= max_x; i++)
                mvprintw(y, i, "_");
            // Linia verticala din dreapta
            for(i = y + 1; i <= min_y/3; i++)
                mvprintw(i, max_x, "|");
            // Linia verticala din stanga
            for(i = y + 1; i < min_y; i++)
                mvprintw(i, x, "|");
            // Linia orizontala de jos
            for(i = x; i <= max_x ; i++)
                mvprintw(min_y, i, "_");
            //cap 
            for(i = margine_cap_stg; i<=margine_cap_dr ; i++)
            	{
            	mvprintw((min_y/3)+1, i, "_");
            	mvprintw((min_y/3)+4, i, "_");
            	}
            for(i=min_y/3+2;i<min_y/3+5;i++)
            {
            	mvprintw(i,margine_cap_stg,"|");
            	mvprintw(i,margine_cap_dr,"|");
            }
            //ochii
            mvprintw(min_y/3+2,margine_cap_stg+2,"x");
            mvprintw(min_y/3+2,margine_cap_dr-2,"x");
            //gura
            mvprintw(min_y/3+3,margine_cap_stg+2,"__");
            mvprintw(min_y/3+5,max_x,"|");
            //trunchi
            for(i = margine_cap_stg; i<=margine_cap_dr ; i++)
            {
            	mvprintw((min_y/3)+6, i, "_");
            	mvprintw((min_y/3)*2, i, "_");
            }
            for(i = (min_y/3)+7;i<(min_y/3)*2+1;i++)
            {
            	mvprintw( i,margine_cap_stg, "|");
            	mvprintw(i,margine_cap_dr, "|");

            }
            //maini
            mvprintw( (min_y/3)+7,margine_cap_stg-1, "_");
           	for(i = (min_y/3)+8;i<(min_y/3)*2+3;i++)
           		mvprintw( i,margine_cap_stg-2, "|");
           	mvprintw( (min_y/3)+7,margine_cap_dr+1, "_");
           	for(i = (min_y/3)+8;i<(min_y/3)*2+3;i++)
           		mvprintw( i,margine_cap_dr+2, "|");


		}
		break;

		case 5:
		{
						// Linia orizontala de sus
            for(i = x; i <= max_x; i++)
                mvprintw(y, i, "_");
            // Linia verticala din dreapta
            for(i = y + 1; i <= min_y/3; i++)
                mvprintw(i, max_x, "|");
            // Linia verticala din stanga
            for(i = y + 1; i < min_y; i++)
                mvprintw(i, x, "|");
            // Linia orizontala de jos
            for(i = x; i <= max_x ; i++)
                mvprintw(min_y, i, "_");
            //cap 
            for(i = margine_cap_stg; i<=margine_cap_dr ; i++)
            	{
            	mvprintw((min_y/3)+1, i, "_");
            	mvprintw((min_y/3)+4, i, "_");
            	}
            for(i=min_y/3+2;i<min_y/3+5;i++)
            {
            	mvprintw(i,margine_cap_stg,"|");
            	mvprintw(i,margine_cap_dr,"|");
            }
            //ochii
            mvprintw(min_y/3+2,margine_cap_stg+2,"x");
            mvprintw(min_y/3+2,margine_cap_dr-2,"x");
            //gura
            mvprintw(min_y/3+3,margine_cap_stg+2,"__");
            mvprintw(min_y/3+5,max_x,"|");
            //trunchi
            for(i = margine_cap_stg; i<=margine_cap_dr ; i++)
            {
            	mvprintw((min_y/3)+6, i, "_");
            	mvprintw((min_y/3)*2, i, "_");
            }
            for(i = (min_y/3)+7;i<(min_y/3)*2+1;i++)
            {
            	mvprintw( i,margine_cap_stg, "|");
            	mvprintw(i,margine_cap_dr, "|");

            }
             //maini
            mvprintw( (min_y/3)+7,margine_cap_stg-1, "_");
           	for(i = (min_y/3)+8;i<(min_y/3)*2+3;i++)
           		mvprintw( i,margine_cap_stg-2, "|");
           	mvprintw( (min_y/3)+7,margine_cap_dr+1, "_");
           	for(i = (min_y/3)+8;i<(min_y/3)*2+3;i++)
           		mvprintw( i,margine_cap_dr+2, "|");


            //picioare
            for(i = (min_y/3)*2+1; i<min_y-3;i++)
            	mvprintw(i,margine_cap_stg,"|");
            mvprintw(min_y-4,margine_cap_stg-1,"_");
            
		}
		break;

		case 6:
		{
						// Linia orizontala de sus
            for(i = x; i <= max_x; i++)
                mvprintw(y, i, "_");
            // Linia verticala din dreapta
            for(i = y + 1; i <= min_y/3; i++)
                mvprintw(i, max_x, "|");
            // Linia verticala din stanga
            for(i = y + 1; i < min_y; i++)
                mvprintw(i, x, "|");
            // Linia orizontala de jos
            for(i = x; i <= max_x ; i++)
                mvprintw(min_y, i, "_");
            //cap 
            for(i = margine_cap_stg; i<=margine_cap_dr ; i++)
            	{
            	mvprintw((min_y/3)+1, i, "_");
            	mvprintw((min_y/3)+4, i, "_");
            	}
            for(i=min_y/3+2;i<min_y/3+5;i++)
            {
            	mvprintw(i,margine_cap_stg,"|");
            	mvprintw(i,margine_cap_dr,"|");
            }
            //ochii
            mvprintw(min_y/3+2,margine_cap_stg+2,"x");
            mvprintw(min_y/3+2,margine_cap_dr-2,"x");
            //gura
            mvprintw(min_y/3+3,margine_cap_stg+2,"__");
            mvprintw(min_y/3+5,max_x,"|");
            //trunchi
            for(i = margine_cap_stg; i<=margine_cap_dr ; i++)
            {
            	mvprintw((min_y/3)+6, i, "_");
            	mvprintw((min_y/3)*2, i, "_");
            }
            for(i = (min_y/3)+7;i<(min_y/3)*2+1;i++)
            {
            	mvprintw( i,margine_cap_stg, "|");
            	mvprintw(i,margine_cap_dr, "|");

            }
             //maini
            mvprintw( (min_y/3)+7,margine_cap_stg-1, "_");
           	for(i = (min_y/3)+8;i<(min_y/3)*2+3;i++)
           		mvprintw( i,margine_cap_stg-2, "|");
           	mvprintw( (min_y/3)+7,margine_cap_dr+1, "_");
           	for(i = (min_y/3)+8;i<(min_y/3)*2+3;i++)
           		mvprintw( i,margine_cap_dr+2, "|");

            //picioare
            for(i = (min_y/3)*2+1; i<min_y-3;i++)
            	mvprintw(i,margine_cap_stg,"|");
            mvprintw(min_y-4,margine_cap_stg-1,"_");
            for(i = (min_y/3)*2+1; i<min_y-3;i++)
            	mvprintw(i,margine_cap_dr,"|");
            mvprintw(min_y-4,margine_cap_dr+1,"_");
		}
		break;
	}
}