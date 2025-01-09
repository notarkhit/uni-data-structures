#include <stdio.h>

char getch() {
	char ch;
	ch = getchar();
    return ch;
}

int main() {

	printf("hello");
	getchar();
	printf("world");
	getchar();
	return 0;
}
