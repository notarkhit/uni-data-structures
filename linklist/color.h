#define black 0
#define red 1
#define green  2
#define yellow 3
#define blue 4
#define purpil 5
#define cyan 6
#define white 7


void color() {
	/*printf("\033[0m");*/
	printf("\033[0;37m");
}

void setcolor(int color ) {
	if (color >= 0 && color <= 7)
		printf("\033[0;3%dm",color);
	else {
		color = 7;
		printf("\033[0;3%dm",color);
	}
}
