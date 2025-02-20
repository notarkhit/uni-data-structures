#include <stdio.h>
#include <stdlib.h>

void clrscr() { system("clear"); }
void getch() { getchar(); getchar(); }

void tower(int, char, char, char);

int main () {

	int number ; 

	clrscr();
	printf("Enter number of drinks : ");
	scanf("%d",&number);
	tower(number, 'A', 'B', 'C');

	return 0;
}

void tower(int n, char s, char t, char d ) {
	if (n==0) {
		return;
	}
	tower(n-1, s, d, t );
	/*printf("move drink %d from %c to %c\n", n, s, d);*/
	printf("%d | %c %c \n", n, s, d );
	tower(n-1, s, d, t );
}
