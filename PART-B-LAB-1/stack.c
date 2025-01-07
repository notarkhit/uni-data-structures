#include <bits/types/stack_t.h>
#include<stdio.h>

#define SIZE 4

int STACK[SIZE], top = -1;

void push(int);
void pop();
void display();

int main() {
	
	int item, option;

	optionFlag:
	
	printf("1. Push \n");
	printf("2. Pop \n");
	printf("3. Display \n");
	printf("4. Exit \n");

	printf("Enter Option : ");
	scanf("%d", &option);
	switch(option) {
		case 1: 
			printf("Enter element to push: ");
			scanf("%d",&item);
			push(item);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		default:
			printf("Invalid option");
			break;
	}
	if(option!=4)
		goto optionFlag;

	return 0;
}

void push(int item){
	
	if(top==SIZE-1){
		printf("stack overflow");
		return;
	}

	top += 1 ;
	STACK[top] = item ;
}


void pop(int item){
	if(top==-1){
		printf("stack underflow");
		return;
	}

	printf("Popped element: %d", STACK[top]);
	top -= 1 ;

}


void display() {

	int i;

	if(top==-1) {
		printf("Stack is empty ");
		return;
	}

	printf("STACK ELEMENTS: \n\n");
	for (i=0; i<top; i++) {
		printf(" %d \n",STACK[i]);
	}

}
