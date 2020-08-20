#include <iostream>

using namespace std;

int gcd(int a, int b){
	if(a < b){
		unsigned long long t = a;
		a = b;
		b = t;
	}
	while(b != 0){
		unsigned long long t = a%b;
		a = b;
		b = t;
	}
	return a;
}

int lcd(unsigned long long  a, 	unsigned long long b){
	return a / gcd(a, b) * b;
}

main(){
	unsigned long long  n, ans = 1, b;
	while(cin >> n){
		if(n == 0)
			break;
		cin >> ans;
		for(int i = 0; i < n-1; i++){
			cin >> b;
			ans = lcd(ans, b);
		}
		cout << ans << '\n';
	}
}
