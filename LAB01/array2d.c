/*
program #2 
A program to read and print a 2d array
*/

#include <stdio.h>

int main() {

	int mat[3][3],m,n,i,j;
	
	m=3;
	n=3;

	printf("Enter elements of matrix[3][3] : \n");

	for ( i = 0 ; i < m ; i++  )
	{
		for ( j = 0 ; j < m ; j++  )
		{
			printf("[%d][%d]:",i,j);
			scanf("%d", &mat[i][j]);
		}
	}

	printf("\nElements of the matrix are: \n\n");

	for ( i = 0 ; i < m ; i++  )
	{
		for ( j = 0 ; j < m ; j++  )
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
return 0;
}
