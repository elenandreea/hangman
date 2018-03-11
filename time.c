#include <ncurses.h>
#include <time.h>

void timepanel( int missed)
{
	int rowNumber, columnsNumber;
	getmaxyx(stdscr, rowNumber, columnsNumber);
	time_t seconds;
	seconds = time(NULL);
  	 mvprintw(rowNumber/2 + rowNumber/3 + 3, /*columnsNumber/2 -10*/0 ,"Hours %s\n", ctime(&seconds));
  	 
}
