#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c,temp;
    int data[3];
    cout << "�п�J���a�G";
    cin >> data[0] ;
    cout << "�п�J���b�G";
    cin >> data[1] ;    
    cout << "�п�J���c�G";
    cin >> data[2] ;
    sort(data,data+3);
    
    a = data[0];
    b = data[1];
	c = data[2];

	if (a+b <= c){
		cout << "�L�k��X�T����";
	}
	else if (a*a + b*b == c*c){
		cout << "�����T����";
	}
	else if (a*a + b*b > c*c){
		cout << "�U���T����";
	}
	else{
		cout << "�w���T����";
	}	
	
    
    return 0;
}


