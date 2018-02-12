#include <ncurses.h>
#include <sys/select.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// ch print 32-47 ... 58 -127
	int randomch(int max)
	{
		char ch ;
		srand(time(NULL));
		ch = rand()%max+32;
		if(isalpha(ch))
			ch=tolower(ch);
		return ch;
		 
	}

