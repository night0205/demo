#include <iostream>
using namespace std;

const int arrayLevel = 3;

int findWinner(int [][arrayLevel]); //�w�q�@�ӧP�_�O�_��Ĺ�a �B�i�H�^�ǽ�Ĺ���禡
void print_board(int [][arrayLevel]);

int main(){
	int board[arrayLevel][arrayLevel] = {{0}}; //�]�@�Ӥ��r�}�Cboard
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int pos = 0;
		cin >> pos;
		pos--; //���쥻����m�s��1~9 �ܦ�0~8
		board[pos/arrayLevel][pos%arrayLevel] = i%2+1; //�bboard�W�Ӯ��U1��2, �N��֦���
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
					board[i][j] = (n+1)%2+1; //�bboard�W�Ӯ��U1��2, �N��֦���
					if(findWinner(board))
						cnt++;
					board[i][j] = 0; //��^�h
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

int findWinner(int board[][3]){
	/*�@��@���ˬd�O�_���s�u*/
	for(int i = 0; i < arrayLevel; i++){
		bool win_1 = true;  //�p�G���@�椣�O1�N�令false, �N��s�u����
		bool win_2 = true;  //�p�G���@�椣�O2�N�令false, �N��s�u����
		for(int j = 0; j < arrayLevel && (win_1||win_2); j++){ //�u�n1��2���s�u���ѴN���X�j��
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
	/*�@�C�@�C�ˬd�O�_���s�u*/
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
	/*�ˬd���W-�k�U���׽u*/
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
	/*�ˬd�k�W-���U���s�u*/
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
