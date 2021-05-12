//Encode the string based on -:
//	1 -> a
//  2 -> b
//  3 -> c
//  ..
//  25 -> y
//  26 -> z

#include <bits/stdc++.h>
using namespace std;

void printEncodings(string ques, string ans)
{
	if(ques.length() == 0)
	{
		cout<<ans<<endl;
		return;
	}
	else if(ques.length() == 1)
	{
		char ch = ques.at(0);
		if(ch == '0')
			return;
		else
		{
			int ch_int_val = ch - '0';
			char code = (char)('a' + ch_int_val - 1);
			cout<< ans + code <<endl;
		}
	} 
	else
	{
		char ch = ques.at(0);
		string roq = ques.substr(1);
		if(ch == '0')
			return;
		else
		{
			int ch_int_val = ch - '0';
			char code = (char)('a' + ch_int_val - 1);
			printEncodings(roq, ans + code);
		}

		string two_ch = ques.substr(0,2);
		string rest_ch = ques.substr(2);

		int two_ch_int_val = stoi(two_ch) ;

		if(two_ch_int_val<=26)
		{
			char code = (char)('a' + two_ch_int_val - 1);
			printEncodings(rest_ch, ans + code);
		}
	}
}

int main()
{
	printEncodings("123", "");
	return 0;
}

//Output
//abc
//aw
//lc

