#include <bits/stdc++.h>
using namespace std;

const string keypad[10] = { "", "", "abc", "def", "ghi", "jkl", "mno",
"pqrs", "tuv", "wxyz" };

vector<string> getKPC(string str)
{
	if(str.size()==0)
	{
		vector<string> res;
		res.push_back("");
		return res;
	}

	char ch = str.at(0);
	string subs = str.substr(1);
	vector<string> rres = getKPC(subs);
	vector<string> myres;

	string codeforch = keypad[ch - '0'];
	for(int i=0; i<codeforch.length(); i++)
	{
		char chcode = codeforch.at(i);
		for(string rstr: rres)
		{
			myres.push_back(chcode + rstr);
		}
	} 

	return myres;
}

int main()
{
	string s = "234";
	vector<string> result = getKPC(s);
	cout<<"[";
	for(int i=0; i < result.size();i++)
	{
		cout<<result[i];
		if(i!=result.size()-1)
			cout<<",";
	}
	cout<<"]"<<endl;

	return 0;
}

//Output
[adg,adh,adi,aeg,aeh,aei,afg,afh,afi,bdg,bdh,bdi,beg,beh,bei,bfg,bfh,bfi,cdg,cdh,cdi,ceg,ceh,cei,cfg,cfh,cfi]


