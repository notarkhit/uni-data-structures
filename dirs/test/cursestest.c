#include <stdio.h>
#include <curses.h>
/*#include <stdlib.h>*/

int main()
{
	initscr();
	/*raw();*/
	/*keypad(stdscr, TRUE);*/
	/*noecho();*/


	int i =2;
	while(i<10){
		move(i, 0);
		printw("hello world %d\n",i);
		refresh();
		i++;
		getch();
		/*system("clear");*/
	}
	return 0;
}
