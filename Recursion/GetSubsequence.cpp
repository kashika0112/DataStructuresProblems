#include <bits/stdc++.h>
using namespace std;

vector<string> getSubsequence(string str)
{
	if(str.length()==0)
	{
		vector<string> res;
		res.push_back("");
		return res;
	}
	char ch = str.at(0);
	string ros = str.substr(1);
	vector<string> rres = getSubsequence(ros);

	vector<string> myres;
	for(string rstr : rres)
	{
		myres.push_back("" + rstr);
	}

	for(string rstr : rres)
	{
		myres.push_back(ch + rstr);
	}


	return myres;
}

int main()
{
	string s = "abc";
	vector<string> result=getSubsequence(s);
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
// [,c,b,bc,a,ac,ab,abc]

