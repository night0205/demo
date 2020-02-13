/*
一房間 d*w 大，外圍有 2*(d+w) 面窗
input
d w start
map d*w  
output出口 
*/
#include<iostream>
using namespace std;
main(){
	int d, w, start, dir; 
	cin >> w >> d;//h,w
	int mirror[d+2][w+2];//map
	for(int i=0;i<d+2;i++){
		for(int j=0;j<w+2;j++){
			mirror[i][j] = -1;
		}
	}
	for(int i=1;i<=d;i++){
		for(int j=1;j<=w;j++){
			cin >> mirror[i][j];//(0 無鏡，1 有鏡 45 度，2 -45 度)
		}
	}
	//start(x, y)
	int x,y;
	for(int aa=0;aa<2*(w+d);aa++){
		start = aa;
		if(start<w){
			y = d+1;
			x = start+1;
			dir = 0;
		}
		else if(start<w+d){
			x = w+1;
			y = d-(start-w);
			dir = 1;
		}
		else if(start<2*w+d){
			y = 0;
			x = w-(start-w-d);
			dir = 2;
		}
		else{
			x = 0;
			y = start-w-d-w+1;
			dir = 3;		
		}
		//cout << y << " " << x << endl;
		//found end,0上 1左 2下 3右 
		int dirx[4] = {0,-1,0,1};
		int diry[4] = {-1,0,1,0};
		int a=0;
		while(a==0){
			x += dirx[dir];
			y += diry[dir];
			if(mirror[y][x] == -1)a=-1;
			if(mirror[y][x] == 1){
				dir = 3-dir;
			}
			if(mirror[y][x] == 2){
				dir = (5-dir)%4;
			}
			//cout << y <<  " " << x << endl;
		}
		int ans=-1;
		if(y==d+1)ans=x-1;
		else if(x==w+1)ans=w+(d-y);
		else if(y==0)ans=w+d+w-x;
		else ans=2*w+d+y-1;
		cout << ans << endl;
	}	 
}


