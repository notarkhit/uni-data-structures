#include <stdio.h>
/*#include <stdlib.h>*/

int add(int, int);

int main () {
	int num1, num2, sum;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	sum = add(num1, num2);

	printf("sum: %d\n", sum);


	return 0;
}

int add (int firstNumber, int secondNumber ) {
	if(firstNumber == 0) 
		return secondNumber;
	if(secondNumber == 0) 
		return firstNumber;
	else 
		return add(firstNumber+1,secondNumber -1);
	
}
