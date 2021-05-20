#include<bits/stdc++.h>
using namespace std;

bool SafePlace(vector<vector<int>> chess, int row, int col)
{
	for(int i = row-1, j = col; i>=0 ; i--){
		if(chess[i][j] == 1)
			return false;
	}

	for(int i = row-1, j = col-1 ; i>=0 && j>=0; i--, j--){
		if(chess[i][j] == 1)
			return false;
	}

	for(int i = row-1, j = col+1 ; i>=0 && j < chess.size(); i--, j++){
		if(chess[i][j] == 1)
			return false;
	}

	return true;
}

void printNQueens(vector<vector<int>> chess, int row, string ans)
{
	if( row == chess.size()){
		cout<< ans <<endl;
		return;
	}

	for(int col = 0; col<chess.size() ; col++)
	{
		if(SafePlace(chess, row, col) == true){
			chess[row][col] = 1;
			printNQueens(chess, row+1, ans + to_string(row) + "-" + to_string(col) + ",");
			chess[row][col] = 0;
		}
	}
}


int main()
{
	int row_size;
	cin>>row_size;
	vector<vector<int>> arr(row_size, vector<int>(row_size));

	printNQueens(arr, 0, "");

	return 0;
}
