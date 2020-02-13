//20191017最大公因數 
#include <iostream>
using namespace std;

main(){
	int a,b,c,min;
	cin >> a >> b >> c;
	min = a;

	if(a>b & c>b){
		min = b;
	}
	if(a<c & c<b){
		min = c;
	}

	if (min == 1){
		cout << 1;
	} 

	for(int i=min; i>0; i--){
		if (a%i==0 & b%i==0 & c%i==0){
			cout << i;
			return 0;
		}
	}
}
