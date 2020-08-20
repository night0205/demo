#include <iostream>

using namespace std;

bool check(int data[], int n){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(data[i] != 1)
			return 1; 
	}
	return 0;
}

main(){
	int n, ans = 1, t = 2;
	while(cin >> n){
		if(n == 0)
			break;
		int d[n];
		for(int i = 0; i < n; i++)
			cin >> d[i];
		while(check(d, n)){
			int cnt = 0;
			for(int i = 0; i < n; i++){
				if(d[i] % t == 0){
					cnt++;
					d[i] /= t;
				}
			}
			if(cnt != 0)
				ans *= t;
			else{
				if(t == 2)
					t++;
				else
					t += 2;
			}
		}
		cout << ans;
	}
}
