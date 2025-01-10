#include <stdio.h>
#include <stdlib.h>

char getch() {
	int ch;
	ch = getchar();
	return ch;
}

int main() {

	for(int i = 0 ; i < 10 ; i ++ ) { 
		printf("[%d]\n",i);
		getch();
		system("clear");
	}

	return 0;
}
