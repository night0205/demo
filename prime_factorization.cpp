#include <iostream>

using namespace std;

main(){
	int n, cnt = 0, t = 2;
	cin >> n;
	while(n > 1){
		cnt = 0;

		while(n % t == 0){
			cnt += 1;
			n /= t;
		}
		
		if(cnt != 0)
			cout << t << ' ' << cnt << '\n';
		
		if(t == 2)
			t++;
		else
			t += 2;	
	}
}

