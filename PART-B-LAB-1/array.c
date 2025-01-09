#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int array[20],size;

void traverseArray( void );
void insertElement( int, int );
void deleteElement( int );

int main() {
	
	int option, position, element, i;
	system("clear");
	
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	system("clear");
	printf( "Array size set to : %d press any key to continue:  ", size );
	getchar();
	system("clear");

	hell:
	printf("------ ARRAY OPERATIONS ------\n\n");
	printf("1. Display \n\n2. Insert \n\n3. Delete \n\n4. Exit\n\nENTER OPTION : ");
	scanf("%d",&option);
	
	switch(option) {
		case 1: break;
		case 2: break;
		case 3: break;
		case 4: break;
		default: break;
	}


	if(option!=4)
		goto hell;

	return 0;
}

void traverseArray() {
	int i ;

	system("clear");
	printf("Array Elements Are: \n");
	for ( i = 0 ; i < size ; i++ ) {
		printf("[%d]: %d\n", i, array[i] );
	}
	getchar();
	system("clear");
}
