#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int circularNumericQueue[SIZE], front = -1, rear =  -1;

void getch() { getchar(); getchar(); }
void clrscr() { system("clear"); }

void circularQueueInsert( int );
void circularQueueDelete ( void );
void circularQueueDisplay ( void );

int main () { 

	int userChoice, numericElement;

	do {
	clrscr();

		printf("------ QUEUE OPERATIONS ------ \n");
		printf("\t[1]\tInsert\n\t[2]\tDelete\n\t[3]\tDisplay\n\t[4]\tExit\n\n\tEnter option:\t>> ");
		scanf("%d",&userChoice);

		switch(userChoice) {
			case 1:
				clrscr();
				printf("\n\n\n\n\n\nEnter element to insert: ");
				scanf("%d",&numericElement);
				circularQueueInsert(numericElement);
				break;
			case 2: 
				circularQueueDelete();
				break;
			case 3: 
				circularQueueDisplay();
				break;
			case 4: 
				clrscr();
				printf("\n\n\n\n\n\n\t------Exit------\n");
				getch();
				clrscr();
				break;
			default:
				clrscr();
				printf("\n\n\n\n\n\n\t------ Invalid option ------\n");
				getch();
				clrscr();
		}

	}while (userChoice!=4);

	return 0;
}



void circularQueueInsert( int element ) {
	clrscr();
	if(((front ==-0)&&(rear == SIZE -1))||(front == rear +1 )) {
		printf("\n\n\n\n\n\n------ Circular Queue is Full ------\n\n");
		getch();
		clrscr();
		return;
	}
	if(front == -1) {
		front = 0;
		rear = 0;
	}
	else if (rear == SIZE -1){
		rear = 0;
	}
	else {
	rear++;
	}

	circularNumericQueue[rear] = element;
}

void circularQueueDelete ( void ) {

	clrscr();
	if(front == -1) {
		printf("\n\n\n\n\n\n------ Queue is Empty ------\n\n");
		getch();
		clrscr();
		return;
	}

	printf("\n\n\n\n\n\nDeleted Element is : %d", circularNumericQueue[front]);
	if( front == rear ) {
		front = -1;
		rear = -1 ;
	}
	else if(front == SIZE -1) {
		front = 0;
	}
	else {
		front += 1;
	}
	getch();
	clrscr();
}


/*void circularQueueDisplay ( void ) {*/
/*	int i;*/
/*	clrscr();*/
/*	if(front == -1) {*/
/*		printf("\n\n\n\n\n\n------ Circular Queue is Empty ------\n\n");*/
/*		getch();*/
/*		clrscr();*/
/*		return;*/
/*	}*/
/**/
/*	printf("\n\n\n\n\n\nCIRCULAR QUEUE ELEMENTS ARE \n\n[FRONT] ::");*/
/*	for (i = front; i <= rear ; i++) {*/
/*		printf("%d :", circularNumericQueue[i]);*/
/*	}*/
/*	printf(": [REAR]\n\n");*/
/*	getch();*/
/*	clrscr();*/
/*}*/


void circularQueueDisplay ( void ) {
	int i;
	clrscr();
	if(front == -1) {
		printf("\n\n\n\n\n\n------ Circular Queue is Empty ------\n\n");
		getch();
		clrscr();
		return;
	}

	printf("\n\n\n\n\n\nCIRCULAR QUEUE ELEMENTS ARE \n\n[FRONT] ::");

	if (front <= rear) {
		for (i = front; i <= rear ; i++) {
			printf("%d :", circularNumericQueue[i]);
		}
	}
	else {
		for (i = front; i <= SIZE-1 ; i++) {
			printf("%d :", circularNumericQueue[i]);
		}
	}
	for (i = 0; i <= rear ; i++) {
		printf("%d :", circularNumericQueue[i]);
	}

	printf(": [REAR]\n\n");
	getch();
	clrscr();
}

