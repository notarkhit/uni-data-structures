#include <stdio.h>
#include <stdlib.h>


struct node {
	int data;
	struct node* link;
};

typedef struct node* NODE;

void insertAtBeginning(int);
void insertAtEnd(int);
int menu();


int main() {
	int element,choice;

	do {
		choice = menu();
		switch(choice) {
			case 1: break;
			case 2: break;
			case 3: break;
			case 4: break;
			case 5: break;
			case 6: break;
			case 7: return 0;
					break;
			default: 
					printf("Invalid option ");
		}

	}while(choice!=6);
	return 0;
}


int menu(){

	int opt;

	system("clear");

	printf("1. Circular Queue menu: \n");
	printf("2. Insert at Beginning \n");
	printf("3. Insert at End \n");
	printf("4. Delete at Beginning \n");
	printf("5. Delete at End \n");
	printf("6. Display \n");
	printf("7. Exit");
	printf("\n Enter your choice: ");
	scanf("%d",&opt);

	return opt;
}
