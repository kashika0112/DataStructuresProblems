#include<bits/stdc++.h>
using namespace std;

void floodfill(vector<vector<int>> maze, int row, int col, string ans, vector<vector<bool>> visited)
{
	if(row<0 || col<0 || row == maze.size() || col == maze[0].size() ||
		maze[row][col] == 1 || visited[row][col] == true)
	{
		return;
	}

	if(row == maze.size() - 1 && col == maze[0].size() - 1)
	{
		cout<<ans<<endl;
		return;
	}

	visited[row][col] = true;
	floodfill(maze, row -1, col, ans + "t", visited);
	floodfill(maze, row, col-1, ans + "l", visited);
	floodfill(maze, row +1, col, ans + "d", visited);
	floodfill(maze, row , col+1, ans + "r", visited);
	visited[row][col] == false;
}

int main()
{
	int row_size;
	int col_size;
	cin>>row_size>>col_size;

	vector<vector<int>> arr(row_size, vector<int>(col_size));

	for (int row_loop = 0; row_loop < row_size; row_loop++)
	{
      for (int col_loop = 0; col_loop < col_size; col_loop++)
      {
      		cin>>arr[row_loop][col_loop];
      }
	}

	vector<vector<bool>> visited(row_size, vector<bool>(col_size));

	floodfill(arr, 0, 0, "", visited);
	return 0;
}

//Sample Input
//3 3
//0 0 0
//1 0 1
//0 0 0

//Output
//rddr

