#include <bits/stdc++.h>
using namespace std;

void displayBoard(vector<vector<int>> board)
{
	for(int i=0 ; i< board.size(); i++)
	{
		for(int j=0; j<board.size(); j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void printKnightTour(vector<vector<int>> &chess, int r, int c, int move)
{
	if(r<0 || c<0 || r>=chess.size() || c>=chess.size() || chess[r][c] >0)
		return;
	else if(move == chess.size() * chess.size()){
		chess[r][c] = move;
		displayBoard(chess);
		chess[r][c] = 0;
		return;
	}

	
	chess[r][c] = move;
	printKnightTour(chess, r-2 , c+1, move + 1);
	printKnightTour(chess, r-1 , c+2, move + 1);
	printKnightTour(chess, r+1 , c+2, move + 1);
	printKnightTour(chess, r+2 , c+1, move + 1);
	printKnightTour(chess, r+2 , c-1, move + 1);
	printKnightTour(chess, r+1 , c-2, move + 1);
	printKnightTour(chess, r-1 , c-2, move + 1);
	printKnightTour(chess, r-2 , c-1, move + 1);
	chess[r][c] = 0;
} 

int main()
{
	int n;
	cin>>n;
	int r, c;
	cin>>r>>c;

	vector<vector<int>> arr(n, vector<int>(n));

	printKnightTour(arr, r, c, 1);

	return 0;
}

