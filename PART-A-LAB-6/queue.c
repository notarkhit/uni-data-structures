#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int numericQueue[SIZE], front = -1, rear =  -1;

void getch() { getchar(); getchar(); }
void clrscr() { system("clear"); }

void queueInsert( int );
void queueDelete ( void );
void queueDisplay ( void );

int main () { 

	int userChoice, numericElement;

	do {
	clrscr();

		printf("------ QUEUE OPERATIONS ------ \n");
		printf("\t[1]\tInsert\n\t[2]\tDelete\n\t[3]\tDisplay\n\t[4]\tExit\n\n\tEnter option:\t>");
		scanf("%d",&userChoice);

		switch(userChoice) {
			case 1:
				clrscr();
				printf("Enter element to insert: ");
				scanf("%d",&numericElement);
				queueInsert(numericElement);
				break;
			case 2: 
				queueDelete();
				break;
			case 3: 
				queueDisplay();
				break;
			case 4: 
				clrscr();
				printf("\n\n\n\t------Exit------\n");
				getch();
				clrscr();
				break;
			default:
				clrscr();
				printf("\n\n\n\t------ Invalid option ------\n");
				getch();
				clrscr();
		}

	}while (userChoice!=4);

	return 0;
}



void queueInsert( int element ) { }
void queueDelete ( void ) { }
void queueDisplay ( void ) { }
