// String operations
#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 20

int clear() { return system("clear"); }
void getch() { getchar(); getchar(); };

int strComp(char*, char*);
int strLen(char *);
char* strCat(char*, char*);

int main() {
	char string1[MAX_LEN], string2[MAX_LEN];

	printf("Enter first string: ");
	fgets(string1, MAX_LEN, stdin);
	printf("Enter second string: ");
	fgets(string2, MAX_LEN, stdin);

	printf("the strings are %s", (strComp(string1, string2))? "not equal" : "equal" );
	printf("concatenated: %s", strCat(string1,string2));
}


int strLen(char *str){
	int size;
	for(size = 0; str[size]!='\0'; size++);
	return size;
}

int strComp(char* str1, char* str2){
	return (strLen(str1) !=  strLen(str2)) ? 1 :
		(*str1 == '\0' && *str2 =='\0') ? 0 : 
		(*str1 != *str2) ? 1 :
		strComp(str1 + 1, str2 + 1 );
}

char* strCat(char *str1, char *str2) {
	return (*str1 == '/0'):;
}
