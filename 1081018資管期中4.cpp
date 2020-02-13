//108-1 台大資管 期中考 第四題
/*
OOXX--player 1 2
1 2 3
4 5 6
7 8 9
輸出能獲勝的格數 
*/
#include <iostream>
using namespace std;

//cnt_win 
int win(int data[][3]);
void output(int data[][3]);
main(){
	int n,x[9],data[3][3] = {0}; //runs,write_where
	cin >> n;

	//input x
	for (int i=0; i<n;i++){
		cin >> x[i];
	}

	//put data in map
	for(int i=0; i<n; i++){
		int xx,yy;
		xx = (x[i]-1)/3;
		yy = (x[i]-1)%3;
		//data[xx][yy] = i%2+1;
		if (i%2==1){ //2
			data[xx][yy] = 2; 
		}
		if (i%2==0){ //1
			data[xx][yy] = 1;
		}
	}
	

 	for(int i = 0; i < 3; i++){
 		for(int j = 0; j < 3; j++){
 			//nobody write here
 			if(data[i][j] == 0){
 				if(n % 2 == 0){
 					data[i][j] = 1;
 					if(win(data)==0){ //如果回傳0=連線 
 						int a = i*3+1;
 						cout << a;
 						return 0;
					}
				 	data[i][j] = 0;
				}
				else{
					data[i][j] = 2;
 					if(win(data)==0){ //如果回傳0=連線 
 						int a = i*3+1;
 						cout << a;
 						return 0;
					}
				 	data[i][j] = 0;
				}
			}
		}
	}

	//one win 
	if(win(data) == 0){
		cout << 99 << endl;
		return 0;
	}
 	int cnt = 0;//ans
 	//nobody win
 	for(int i = 0; i < 3; i++){
 		for(int j = 0; j < 3; j++){
 			//nobody write here
 			if(data[i][j] == 0){
 				if(n % 2 == 1){
 					data[i][j] = 1;
 					if(win(data)==0){ //如果回傳0=連線 
 						cnt++;
					}
				 	data[i][j] = 0;
				}
				else{
					data[i][j] = 2;
 					if(win(data)==0){ //如果回傳0=連線 
 						cnt++;
					}
				 	data[i][j] = 0;
				}
			}
		}
	}
	cout << cnt; 
	return 0;
}		
	
int win(int data[][3]){
	//判斷是否連線 
	int x = -1;
	int a,b,c,d,e,f,g,h,i;
	a = data[0][0];b = data[0][1];c = data[0][2];
	d = data[1][0];e = data[1][1];f = data[1][2];
	g = data[2][0];h = data[2][1];i = data[2][2];
	if (a == b && b == c && a != 0) x = 0;
	if (d == e && e == f && d != 0) x = 0;
	if (g == h && h == i && g != 0) x = 0; 
	if (a == d && d == g && a != 0) x = 0;
	if (b == e && h == e && b != 0) x = 0;
	if (c == f && f == i && i != 0) x = 0;
	if (a == e && e == i && a != 0) x = 0;
	if (c == e && e == g && c != 0) x = 0;
	return x;
	}
	
void output(int data[][3]){
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout << data[i][j] << " " ;
		}
		cout << endl; 
	}
}
