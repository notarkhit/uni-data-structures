#include <stdio.h>
#include <stdlib.h>

void getch() { getchar(); getchar(); }
int clear() { return system("clear"); }

void vswap(int, int);
void rswap(int*, int*);

int main (){
	int a,b;

	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Values\na:%d\tb:%d\n",a,b);
	getch();
	clear();

	vswap(a,b);
	printf("Actual values after swap\na:%d\tb:%d\n",a,b);

	rswap(&a,&b);
	printf("\nCall by reference\n");
	printf("Actual values after swap\na:%d\tb:%d\n",a,b);

	return 0;
}
void vswap(int x, int y){
	x += x + y;
	y = x - y;
	x -= y;
	printf("Call by value\na:%d\tb:%d\n",x,y);
}
void rswap(int *x, int *y) {
	*x += *y;
	*y = *x - *y;
	*x -= *y;
}
