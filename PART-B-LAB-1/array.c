#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int array[20],size;

void traverseArray( void );
void insertElement( int, int );
void deleteElement( int );

int main() {
	
	int position, element, i;
	system("clear");
	
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	system("clear");
	printf("Array size set to : %d press any key to continue:  ");
	getchar();
	system("clear");

	return 0;
}
