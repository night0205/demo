#include <stdio.h>

int a, b, c;

int cnt(int all, int ac, int bc, int cc){
	if(all < 0 || a < 0 || b < 0 || c < 0)
		return 0;
	if(all == 0)
		return 1;
	return cnt(all-a, ac-1, bc, cc) || cnt(all-b, ac, bc-1, cc) || cnt(all-c, ac, bc, cc);
}


int main(void){
	int n, all, ac, bc, cc;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d %d %d %d %d %d", &all, &ac, &bc, &cc, &a, &b, &c);
		printf(cnt(all, ac, bc, cc)?"yes\n" : "no\n");
	}
	return 0;
}

