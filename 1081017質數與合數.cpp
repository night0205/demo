//��� 
#include <iostream>

using namespace std;

main (){
	int n,num,on=0;
	
	cin >> n;
	num = n;
	for (int i=n-1; i=0; i--){
		if(n%num == 0){
			cout << n << "�O�X��";
			on = 1;
		}
	}
	if(on==0){
		cout << n << "�O���";
	}
	
	return 0;
}
