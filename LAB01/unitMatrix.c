/*
program #5 
A program to read and print a 2d array
*/

#include <stdio.h>

int main() {

	int mat[3][3],m,n,i,j,flag=1;
	
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
		for ( j = 0 ; j < m ; j++  )
		{
			if(mat[j][i]!=1)
			{
				flag =0;
				break;
			}
		}
	}

	if(flag)
		printf("\nIt is a unit matrix\n");
	else
		printf("\nIt is not a unit matrix\n");

return 0;
}
