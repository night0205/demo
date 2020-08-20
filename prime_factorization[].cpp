#include <iostream>

using namespace std;

main(){
	int a, b, cnt[10000] = {0}, d[10000] = {0}, t = 2;
	cin >> a >> b;
	if(a > b){
		int tmp = a;
		a = b; 
		b = tmp;
	}
	int x = 0;
	while(a > 1){
		cnt[x] = 0;
		
		d[x] = t;
		while(a % t == 0){
			cnt[x] += 1;
			a /= t;
		}
		if(cnt[x] != 0)
			x++;

		if(t == 2)
			t++;
		else
			t += 2;	
	}
	int ans = 1;
	while(x--){
		while(cnt[x]--){
			if(b%d[x] == 0){
				b /= d[x];
				ans *= d[x];
			}
		}
	}
	cout << ans;
}

