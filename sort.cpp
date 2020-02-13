#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int *p,int *q){
	return p[0]<q[0];
}

int main(){
    int n,l;
    cin >> n >> l;
    int **s=new int*[5];
    for(int i = 1; i <= n; i++){
        s[i]=new int[2];
        cin >> s[i][0];
    }
    for(int i = 1; i <= n; i++){
        cin >> s[i][1];
        cout << 0;
    }
    cout << 1;
    sort(s,s+n+1,cmp);
	for(int i = 1; i <= n; ++i){
        cout << s[i][0] << s[i][1];
    }
    int p[n+2];
    for(int i = 1; i <= n+2; ++i){
    	p[i-1] = i;
	}
	p[n+1] = 0;
	
	int max = 0;
	int cnt = 0;
	int f = 0;
	while(f == 0){
		cout << f;
	    f = 1;
	    for(int x = 1; x <= n; ++x){
	    	cout << x;
	    	int i = p[x];
	        if((s[i][0]+s[i][1] <= s[i+1][1])||(s[i][0]-s[i][1] >= s[i][1])){
	            if(s[i][0] > max)
	                max = s[i][0];
				p[x] = p[i];
	            cnt += 1;
	            f = 0;
	        }
	    }
	}
	if(cnt == 0)
		cout << 0 << '\n' << 0;
	else
		cout << cnt << '\n' << max;
}
