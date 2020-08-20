#include <stdio.h>

int a, b, c;
int da, db, dc, fa, fb, fc, ea, eb, ec;

int check(int a, int b, int c){
	if(a < 0 || b < 0 || c < 0)
		return 0;
	if(a == 0 && b == 0 && c == 0)
		return 1;
	return check(a-da, b-db, c-dc) + check(a-fa, b-fb, c-fc) + check(a-ea, b-eb, c-ec); 
}
void in(int n){
	if(n <= 0)
		return;
	scanf("%d %d %d", &a, &b, &c);
	printf(check(a, b, c)? "yes\n":"no\n");
	in(n-1);
}
int main(void){
	int n;
	scanf("%d %d %d", &da, &db, &dc);
	scanf("%d %d %d", &fa, &fb, &fc);
	scanf("%d %d %d", &ea, &eb, &ec);
	scanf("%d", &n);
	in(n);
	return 0;
}
