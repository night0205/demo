#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c,temp;
    int data[3];
    cout << "請輸入邊長a：";
    cin >> data[0] ;
    cout << "請輸入邊長b：";
    cin >> data[1] ;    
    cout << "請輸入邊長c：";
    cin >> data[2] ;
    sort(data,data+3);
    
    a = data[0];
    b = data[1];
	c = data[2];

	if (a+b <= c){
		cout << "無法圍出三角形";
	}
	else if (a*a + b*b == c*c){
		cout << "直角三角形";
	}
	else if (a*a + b*b > c*c){
		cout << "銳角三角形";
	}
	else{
		cout << "鈍角三角形";
	}	
	
    
    return 0;
}


