#include <stdio.h>


int cnt(int n){
	if(n <= 0)
		return 0;
	return n*n+cnt(n-1);
}

int main(void){
	int n;
	scanf("%d", &n);
	printf("%d\n", cnt(n));
	return 0;
}
