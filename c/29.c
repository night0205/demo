#include <stdio.h>

int cnt(int r, int c, int x, int y){
	if(x > r || y > c)
		return 0;
	if(x == r && y == c)
		return 1;
	return cnt(r, c, x+1, y) + cnt(r, c, x, y+1);
}

int main(void){
	int r, c;
	scanf("%d %d", &r, &c);
	printf("%d", cnt(r, c, 1, 1));
	return 0;
}
