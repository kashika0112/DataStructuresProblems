#include <bits/stdc++.h>
using namespace std;

void printPermutations(string ques, string res)
{
	if(ques.length()==0)
		{
			cout<<res<<endl;
			return;
		}

	for(int i=0; i<ques.length();i++)
	{
		char ch = ques.at(i);
		string rest = ques.substr(0,i) + ques.substr(i+1);
		printPermutations(rest, res + ch);
	}
}

int main()
{
	string q1 = "ABC";
	printPermutations(q1, "");

	return 0;
}

//Output
//ABC
//ACB
//BAC
//BCA
//CAB
//CBA

