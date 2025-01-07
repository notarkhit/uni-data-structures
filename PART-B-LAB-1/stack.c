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

