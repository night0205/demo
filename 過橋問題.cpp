//http://www.tmo.com.tw/files/GMCCqej.pdf
//第四題:過橋問題 
#include <iostream>
using namespace std;
main(){
	int l,n;
	cin >> l >> n;
	int a,min=-1,max=-1;
	for(int i=0;i<n;i++){
		cin >> a;
		int te = (a<(l-a))?a:(l-a);
		int tee = (a>(l-a))?a:(l-a);
		if(min<te) min = te; 
		if(max<tee) max = tee; 
	}
	cout << min << " " << max; 
} 



