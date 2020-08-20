#include <stdio.h>
 
int k, n, m, s[20];
 
int cnt(int s[], int t, int i, int c, int f){    
    if(c <= m && t >= k && f == 0 && i <= n){
        return 1 + cnt(s, t+1, i+1, c+s[i], 0) + cnt(s, t, i+1, c, 1);
	}
    if(c > m || i >= n)
        return 0;
    return cnt(s, t+1, i+1, c+s[i], 0) + cnt(s, t, i+1, c, f); 
}
 
int main(void){
    scanf("%d %d %d", &k, &n, &m);
    for(int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    printf("%d", cnt(s, 0, 0, 0, 0));
    return 0;
}
