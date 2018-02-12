#include <ncurses.h>
#include <menu.h>
#include <sys/select.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))
#define FOREVER 			1
#define STR_MAX_LEN 		100
#define S_TO_WAIT 			7
#define MILIS_TO_WAIT		0
#define KEYBOARD			0
#define QUIT				"quit"
#define SELECT_ERROR		-1
#define SELECT_EVENT		1
#define SELECT_NO_EVENT		0

#include "time.c"
#include "citire.c"
#include "menu.c"
#include "desen.c"
#include "randomorg.c"
#include "hidden1.c"
#include "play1.c"
//#include "try2.c"
#include "try.c"




int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		printf("[Eroare]: Nu s-au dat argumente de comanda.\n ");
		return 1;
	}

	char **matrix, *expression;
	int number_of_lines = 0, number_of_valid_characters = 0, menu_return = 0;

	matrix = citire(&number_of_lines, &number_of_valid_characters, argc, argv);
	
while ( 1 )
{
	menu_return = MainMenu();
	if(menu_return == 1 )
	{
		int random_nr;
		random_nr = randomline(number_of_lines);

		int dim = strlen(matrix[random_nr]);
	
		char *ascuns;
		ascuns = (char*)calloc(dim, sizeof(char));
		expression = strdup(matrix[random_nr]);
		hidden(expression, ascuns);

		play(matrix[random_nr], ascuns,number_of_lines,number_of_valid_characters);
	}
	// if(menu_return == 2 )
	// {
	// 	clear();
	// 	refresh();
	// 	play(matrix[random_nr], ascuns,number_of_lines,number_of_valid_characters);
	// }
}

	endwin();
	return 0;
}

