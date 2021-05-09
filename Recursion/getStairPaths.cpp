// StaircasePaths2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <vector>
using namespace std;

vector<string> getStairPaths(int n)
{
	if (n == 0)
	{
		vector<string> res;
		res.push_back("");
		return res;
	}
	else if (n < 0)
	{
		vector<string> res;
		return res;
	}

	vector<string> path1 = getStairPaths(n - 1);
	vector<string> path2 = getStairPaths(n - 2);
	vector<string> path3 = getStairPaths(n - 3);
	vector<string> paths;

	for (string path : path1)
	{
		paths.push_back("1" + path);
	}
	for (string path : path2)
	{
		paths.push_back("2" + path);
	}

	for (string path : path3)
	{
		paths.push_back("3" + path);

	}

	return paths;

}

int main()
{
	int num = 4;
	vector<string> result = getStairPaths(num);
	cout << "[";
	for (int i = 0;i < result.size();i++)
	{
		cout << result[i];
		if (i != result.size() - 1)
			cout << ",";
	}

	cout << "]" << endl;
	return 0;
}

//output
//[1111,112,121,13,211,22,31]
