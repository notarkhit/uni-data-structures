#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int array[20],size;
void getch() { getchar(); getchar(); }
void clear() { system("clear"); }

void traverseArray( void );
void insertElement( int, int );
void deleteElement( int );

int main() {
	
	int option, position, element, i;
	clear();

	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	clear();
	
	printf( "Array size set to : %d press any key to continue:  ", size );
	
	getch();
	clear();

	printf("Enter array elements: \n");
	for ( i = 0 ; i < size ; i++ ) {
		printf("[%d]: ",i);
		scanf("%d",&array[i]);
	}
	printf("Array is full!!!\t press any key to continue... ");
	getch();
	clear();

	hell:

	printf("------ ARRAY OPERATIONS ------\n\n");
	printf("1. Display \n\n2. Insert \n\n3. Delete \n\n4. Exit\n\nENTER OPTION : ");
	scanf("%d",&option);
	
	switch(option) {
		case 1: 
			traverseArray();
			break;
		case 2:
			/*insertElement(element, position)*/
			break;
		case 3: 
			/*deleteElement(position)*/
			break;
		case 4: 
			clear();
			printf("\n\n\t------ EXIT ------\n");
			getch();
			exit(0);
			break;
		default: 
			break;
	}


	if(option!=4)
		goto hell;

	return 0;
}

void traverseArray() {
	int i ;
	clear();
	printf("Array Elements Are: \n");
	for ( i = 0 ; i < size ; i++ ) {
		printf("[%d]: %d\n", i, array[i] );
	}
	getch();
	clear();
}


void insertElement( int element, int position ) {  }

void deleteElement( int position) {  }

