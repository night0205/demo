//質數 
#include <iostream>

using namespace std;

main (){
	int n,num,on=0;
	
	cin >> n;
	num = n;
	for (int i=n-1; i=0; i--){
		if(n%num == 0){
			cout << n << "是合數";
			on = 1;
		}
	}
	if(on==0){
		cout << n << "是質數";
	}
	
	return 0;
}
