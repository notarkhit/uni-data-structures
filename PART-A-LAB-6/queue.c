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



void queueInsert( int element ) {
	clrscr();
	if(rear == SIZE -1) {
		printf("\n\n------ Queue is Full ------\n\n");
		getch();
		clrscr();
		return;
	}
	if(front == -1) {
		front = 0;
		rear = 0;
	}
	else {
		rear += 1;
	}
	numericQueue[rear] = element;
}

void queueDelete ( void ) {

	clrscr();
	if(front == -1) {
		printf("\n\n------ Queue is Empty ------\n\n");
		getch();
		clrscr();
		return;
	}

	printf("Deleted Element is : %d", numericQueue[front]);
	if( front == rear ) {
		front = -1;
		rear = -1 ;
	}
	else {
		front += 1 ;
	}
	getch();
	clrscr();
}


void queueDisplay ( void ) {
	int i;
	clrscr();
	if(front == -1) {
		printf("\n\n------ Queue is Empty ------\n\n");
		getch();
		clrscr();
		return;
	}

	printf("QUEUE ELEMENTS ARE \n\n[FRONT] :: ");
	for (i = front; i <= rear ; i++) {
		printf("%d : ", numericQueue[i]);
	}
	printf(": [REAR]\n\n");
	getch();
	clrscr();
}


