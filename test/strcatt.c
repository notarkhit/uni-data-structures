#include <stdio.h>

void strcatt(char[],char[]);

int main(){

	int stringSize = 20;
	char firstString[stringSize], secondString[stringSize];

	printf("Enter First String: ");
	fgets(firstString, stringSize, stdin );
	printf("Enter second String: ");
	fgets(secondString, stringSize, stdin );


	printf("%s%s", firstString, secondString);


	return 0;

}
