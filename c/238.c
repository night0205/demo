#include <stdio.h>

int cnt(int n, int s[], int q, int i, int c){
	//printf("%d\n", c);
	if(c == q)
		return 1;
	if(c > q || i >= n)
		return 0;
	return cnt(n, s, q, i+1, c + s[i]) + cnt(n, s, q, i+1, c);
}

int main(void){
	int n, s[15], q;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &s[i]);
	while(scanf("%d", &q) != EOF){
		printf("%d\n", cnt(n, s, q, 0, 0));
	}
	return 0;
}
