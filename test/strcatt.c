#include <stdio.h>
#include <string.h>

void strcatt(char[],char[]);

int main(){

	int stringSize = 20;
	char firstString[stringSize], secondString[stringSize], catString[stringSize*2];

	printf("Enter First String: ");
	fgets(firstString, stringSize, stdin );
	printf("Enter second String: ");
	fgets(secondString, stringSize, stdin );

	strcatt(firstString, secondString);

	printf("concatenated string: %s",catString);

	return 0;

}

void strcatt(char s1[], char s2[]){
	int i;
}
