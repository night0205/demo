#include <iostream>
using namespace std;

const int arrayLevel = 3;

int findWinner(int [][arrayLevel]); //定義一個判斷是否有贏家 且可以回傳誰贏的函式
void print_board(int [][arrayLevel]);

int main(){
	int board[arrayLevel][arrayLevel] = {{0}}; //設一個井字陣列board
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int pos = 0;
		cin >> pos;
		pos--; //讓原本的位置編號1~9 變成0~8
		board[pos/arrayLevel][pos%arrayLevel] = i%2+1; //在board上該格放下1或2, 代表誰佔領
	}
	//print_board(board);
	if(findWinner(board)){
		cout << 99 << endl;
	}
	else{
		int cnt = 0;
		for(int i = 0; i < arrayLevel; i++){
			for(int j = 0; j < arrayLevel; j++){
				if(board[i][j] == 0){
					board[i][j] = (n+1)%2+1; //在board上該格放下1或2, 代表誰佔領
					if(findWinner(board))
						cnt++;
					board[i][j] = 0; //改回去
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

int findWinner(int board[][3]){
	/*一行一行檢查是否有連線*/
	for(int i = 0; i < arrayLevel; i++){
		bool win_1 = true;  //如果有一格不是1就改成false, 代表連線失敗
		bool win_2 = true;  //如果有一格不是2就改成false, 代表連線失敗
		for(int j = 0; j < arrayLevel && (win_1||win_2); j++){ //只要1跟2都連線失敗就跳出迴圈
			if(board[i][j] != 1)
				win_1 = false;
			if(board[i][j] != 2)
				win_2 = false;
		}
		if (win_1)
			return 1;
		if (win_2)
			return 2;
	}
	/*一列一列檢查是否有連線*/
	for(int j = 0; j < arrayLevel; j++){
		bool win_1 = true;
		bool win_2 = true;
		for(int i = 0; i < arrayLevel && (win_1||win_2); i++){
			if(board[i][j] != 1)
				win_1 = false;
			if(board[i][j] != 2)
				win_2 = false;
		}
		if (win_1)
			return 1;
		if (win_2)
			return 2;
	}
	/*檢查左上-右下的斜線*/
	bool win_1 = true;
	bool win_2 = true;
	for(int i = 0; i < arrayLevel && (win_1||win_2); i++){
		if(board[i][i] != 1)
			win_1 = false;
		if(board[i][i] != 2)
			win_2 = false;
	}
	if (win_1)
		return 1;
	if (win_2)
		return 2;
	/*檢查右上-左下的連線*/
	win_1 = true;
	win_2 = true;
	for(int i = 0; i < arrayLevel && (win_1||win_2); i++){
		if(board[i][arrayLevel-i-1] != 1)
			win_1 = false;
		if(board[i][arrayLevel-i-1] != 2)
			win_2 = false;
	}
	if (win_1)
		return 1;
	if (win_2)
		return 2;
	return 0;
}

void print_board(int board[][arrayLevel]){
	for(int i = 0; i < arrayLevel; i++){
		for(int j = 0; j < arrayLevel; j++)
			cout << board[i][j] << ((j == arrayLevel-1)?'\n':' ');
	}
}
