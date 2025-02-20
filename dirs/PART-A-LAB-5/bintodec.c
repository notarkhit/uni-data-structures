#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void clrscr() { system("clear"); }
void getch() { getchar(); getchar(); }

int binaryToDecimal( int, int, int );

int main () {
	int base2,base10;

	clrscr();

	printf("Enter binary number: ");
	scanf("%d", &base2);
	base10 = binaryToDecimal(base2, base10, 0);
	
	printf("(%d)base2 = (%d)base10", base2, base10);

	return 0; 
}


int binaryToDecimal (int binaryNumber, int decimalNumber, int i  ) {
	int iRemainder ;
	iRemainder = binaryNumber % 10;
	decimalNumber += iRemainder * pow(2, i);
	return binaryToDecimal(binaryNumber/10, decimalNumber, i+1);
}
