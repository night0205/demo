#include<iostream>

using namespace std;

int t[3] = {1,2,3};

void hanoi(int n, int s, int e){ //start,end
	if(n == 1){
		cout << "ring " << n << " from " << t[s] << " to " << t[e] << '\n';
		return;
	}
	int tmp = 3-s-e;
	hanoi(n-1, s, tmp);
	cout << "Ring " << n << " from " << t[s] << " to " << t[e] << '\n';
	hanoi(n-1, tmp, e);
}

main(){
	int n;
	cin >> n;
	hanoi(n, 0, 2);	
} 
