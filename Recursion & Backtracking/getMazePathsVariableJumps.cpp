#include <bits/stdc++.h>
using namespace std;

vector<string> getMazePathsVariableJumps(int sr,int sc, int dr, int dc)
{
	if(sr==dr && sc==dc)
	{
		vector<string> res;
		res.push_back("");
		return res;
	}
	

	vector<string> paths;

	//Horizontal moves
	for(int moves=1;moves<=dc-sc;moves++)
	{
		vector<string> hpaths = getMazePathsVariableJumps(sr,sc+moves,dr,dc);
		for(string hpath: hpaths )
		{
			paths.push_back("h"+to_string(moves)+hpath);
		}

	}
	//Vertical moves
	for(int moves=1;moves<=dr-sr;moves++)
	{
		vector<string> vpaths = getMazePathsVariableJumps(sr+moves,sc,dr,dc);
		for(string vpath: vpaths )
		{
			paths.push_back("v"+to_string(moves)+vpath);
		}

	}
	//Diagonal moves
	for(int moves=1;moves<=dc-sc && moves<=dr-sr;moves++)
	{
		vector<string> dpaths = getMazePathsVariableJumps(sr+moves,sc+moves,dr,dc);
		for(string dpath: dpaths )
		{
			paths.push_back("d"+to_string(moves)+dpath);
		}

	}

	return paths;

}

int main()
{
	int row=2;
	int col=2;

	vector<string> result=getMazePathsVariableJumps(1,1,row,col);
	cout<<"[";
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i];
		if(i!=result.size()-1)
			cout<<",";
	}

	cout<<"]"<<endl;
	return 0;
}

//Output
//[[h1v1,v1h1,d1]]

