#include <stdio.h>

int r, c, d[14][14];

int cnt(int x, int y){
	if(d[x][y] == 0)
		return 0;
	if(x == 1 && y == c)
		return 1;
	return cnt(x-1, y) + cnt(x, y+1);
}

int main(void){
	scanf("%d %d", &r, &c);
	for(int i = 1; i <= r; i++){
		for(int j = 1; j <= c; j++){
			scanf("%d", &d[i][j]);
		}
	}
	printf("%d\n", cnt(r,1));
			
}
