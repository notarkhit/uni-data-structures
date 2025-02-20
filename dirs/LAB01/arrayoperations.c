/*
program # 1 
PART A lab 1
WAP to insert and delete an element at the specified position in an array
*/

#include <stdio.h>

void insert (int[],int,int);
void delete (int[],int,int);

int arraySize;

int main()
{
	int array[10], i, element, pos, option;

	printf("Enter array size: ");
	scanf( "%d" , &arraySize);
	

	printf("Enter array elements : \n");
	for (i = 0; i < arraySize; ++i) {
		printf("array [%d] : ", i );
		scanf("%d", &array[i] );
	}


	printf("Array elements : \n");
	for (i = 0; i < arraySize; ++i) {
		printf("array [%d] : %d \n", i , array[i] );
	}
	
	do {

		printf("--- Array operations --- ");
		printf("\n1. Insertion \n2. Deletion \n3. Exit\n\n[YOUR CHOICE]: ");
		scanf("%d", &option);


		switch(option) {
			case 1: break;
			case 2: break;
			case 3: break;
			default:;
		}

	}while(1);
	
	return 0;
}

void insert(int fnArray[], int insElement, int insertPos)
{
	if(insertPos <0 || insertPos>arraySize)
	{
		printf("\n\ninsertion not possible\n\n");
		return;
	}

	

}
