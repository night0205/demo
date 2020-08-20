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
	int ans = 1;
	while(t <= a && t <= b){
		while(a%t == 0 && b%t == 0){	
			ans *= t;
			a /= t;
			b /= t;
		}
		if(t == 2)
			t++;
		else
			t += 2;	
	}
	cout << ans;
}

