#include <stdio.h>
#include <stdlib.h>
#include "color.h"

void clear() {system("clear");}
void getch() {getchar(); getchar();}

struct node {
	int data;
	struct node *next;
};

typedef struct node* NODE;

NODE createNode(NODE);
NODE getnode();
void traverse(NODE);

int main() {

	NODE head = NULL;
	int option, element;

menu:
	clear();
	setcolor(green);
	printf("--- Singly linked list ---");
	printf("\n1. Display");
	printf("\n2. Insert");
	printf("\n3. Delete");
	printf("\n4. Exit");
	printf("\n\nEnter an option >> ");
	color();
	scanf("%d",&option);

	switch (option) {
		
		case 1:
			if(head == NULL){
				setcolor(red);
				printf("\nLinked list is empty\n");
				getch();
				clear();
				break;
			}
			setcolor(blue);
			/*traverse(head);*/
			clear();
			break;

		case 2:
			setcolor(blue);
			printf("\nEnter the element to insert >> ");
			setcolor(white);
			scanf("%d",&element);
			/*createNode(head);*/
			break;
		
		case 3:
			setcolor(yellow);
			printf("\nWork in progress\n");
			getch();
			clear();
			break;
		
		case 4: 
			setcolor(blue);
			printf("\nExit Program \n");
			getch();
			clear();
			break;
		default:
			setcolor(red);
			printf("\nInvalid option, please enter again");
			getch();
			clear();
			break;
	}

	if (option != 4) goto menu;


	return 0;
}
