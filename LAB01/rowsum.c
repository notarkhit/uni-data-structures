/*
program #4 
A program to read and print a 2d array
*/

#include <stdio.h>

int main() {

	int mat[3][3],m,n,i,j,sum=0;
	
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


	for ( i = 0 ; i < m ; i++  )
	{
		sum = 0;
		for ( j = 0 ; j < m ; j++  )
		{
			sum += mat[i][j];
		}
		printf("\n sum of row [%d] elements is : %d", i, sum);
	}


return 0;
}
