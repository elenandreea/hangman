#include <ncurses.h>
#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/select.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SELECT_ERROR        -1
#define SELECT_EVENT        1
#define SELECT_NO_EVENT     0

int randomch(int max)
{
    char ch ;
    srand(time(NULL));
    ch = rand()%max+32;
    if(isalpha(ch))
        ch=tolower(ch);
    return ch;
         
}

int timechar(char *sir, char *ascuns)
{
    fd_set rfds;
    struct timeval tv;
    int retval;
    int ajutor=0;

    /* Watch stdin (fd 0) to see when it has input. */
    FD_ZERO(&rfds);
    FD_SET(0, &rfds);
    /* Wait up to five seconds. */
    tv.tv_sec = 7;
    tv.tv_usec = 0;
    retval = select(1, &rfds, NULL, NULL, &tv);
    /* Don’t rely on the value of tv now! */
	char c;

    switch(retval){
        case 1:
            c=getch();
            return c;
            break;
        case 0:
            ajutor=0;
            while(ajutor==0)
            {   
                char i;
                i=randomch(95);
                int j,aux1=1,aux2=1;
                for(j=0;j<strlen(sir);j++)
                    if(sir[j]==i)
                        aux1=0;
                for(j=0;j<strlen(ascuns);j++)
                    if(ascuns[j]==i)
                        aux2=0;
                if(aux1==1 && aux2 ==1)
                    {
                        ajutor=1;
                        return i;
                   }
            }
            break;
        }
    return 0;
        
}
