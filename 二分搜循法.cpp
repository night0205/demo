#include <iostream>

using namespace std;

int binarySearch(int data[], int q,int n){ 
    int min = 0; 
    int max = n - 1; 
    while(min <= max) { 
        int mid = (min+max)/2; 
        if(data[mid] < q) 
            min = mid+1; 
        else if(data[mid] > q) 
            max = mid - 1; 
        else 
            return mid; 
    } 
    return -1; 
} 
main() { 
	int n,k;
	cin >> n >> k;
	int data[n],Q[k];
	for(int i=0;i<n;i++)cin >> data[i];
	for(int i=0;i<k;i++)cin >> Q[i];
	for(int x=0;x<k;x++){
		int i =  binarySearch(data, Q[x],n);
	    i++;
    	cout << i << '\n';      
	}	
}



