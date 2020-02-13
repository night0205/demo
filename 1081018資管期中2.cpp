//https://cdn.fbsbx.com/v/t59.2708-21/70195728_395811984423236_3397374381595295744_n.pdf/PD108-1_midterm.pdf?_nc_cat=111&_nc_oc=AQmLq39tKn-VGQWyW4GAuf6Qb7-LVLrXOVivallS_KPDmmqTq8ngKz2g-WTrVSfgzWjj-45-DnooS8ENNpWoyZvU&_nc_ht=cdn.fbsbx.com&oh=cd130d84b772c5007883977cbbda0c1d&oe=5DAC13E7&dl=1 
//108-1 台大資管 期中考 第二題 
#include <iostream>
using namespace std;
 
main (){
	int life_cnt = 0;
	int alive[49];
	int m,n;//bomb1 bomb2
	int map[9][9] = {0};
	cin >> m >> n;
	int x[m],y[n];//bomb1_num,bomb2_num
	//bomb1
	for (int i=1; i<m+1; i++){
		int bomb1;
		cin >> bomb1;
		int bomb1_i = (bomb1-1)/7 + 1;
		int bomb1_j = (bomb1-1)%7 + 1;
		for (int i = bomb1_i - 1; i <= bomb1_i +1 ;i++){
			for (int j = bomb1_j - 1; j <= bomb1_j+1 ;j++){
				map[i][j] = 1;
			}
		}
	}
	
	//bomb2
	for (int i=1; i<n+1; i++){
		int bomb2;
		cin >> bomb2;
		int bomb2_i = (bomb2-1)/7 + 1;
		int bomb2_j = (bomb2-1)%7 + 1;
		for (int i=1; i < 8; i++){
			if(map[bomb2_i][i] == 0){
				map[bomb2_i][i] = 2;
			}
		}
		for (int i = 1; i < 8; i++){
			if(map[i][bomb2_j] == 0){
				map[i][bomb2_j] = 2;
		}
	}
	//check alive
	
	} 
	for (int i = 1; i < 8; i++){
		for (int j = 1; j < 8; j++){
			if(map[i][j] == 0){
				alive[life_cnt] = (i-1)*7 + j;
				life_cnt++ ;
			}
		}
	} 
	//out put
	cout << alive[0];
	for (int i = 1; i < life_cnt; i++){
		cout << ',' << alive[i];
	}	
	return 0;
}
