#include <stdio.h>
/*#include <stdlib.h>*/

int factorial(int);

int main () {
	int number, fact;
	
	printf("Enter a number: ");
	scanf("%d",&number);

	fact = factorial(number);

	printf("factorial: %d\n", fact);


	return 0;
}

int factorial (int number ) {
	if(number == 0) {
		return 1;
	}
	else {
		return (number * factorial(number-1));
	}
}
