#include <stdio.h>

char getch() {

	char ch;
	ch = getchar();
	return ch;

}

int main() {

	printf("hello ");
	getch();
	printf("World");
	getch();
	return 0;

}
