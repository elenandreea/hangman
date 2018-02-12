#include <ncurses.h>
#include <sys/select.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

	int randomline(int max)
	{
		int i ;
		srand(time(NULL));
		i = rand()%max;
		return i;
		 
	}

