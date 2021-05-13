#include <bits/stdc++.h>
using namespace std;

void getSum(vector<int> arr, int index, string subset, int total_sum, int number)
{
	if(index == arr.size())
	{
		if(number == total_sum)
		{
			subset = subset.substr(0, subset.length()-1);
			cout<<subset;
			cout<<"."<<endl;
		}
		
		return;
	}

	getSum(arr, index + 1, subset + to_string(arr[index]) + " ",total_sum + arr[index], number);


	getSum(arr, index +1 , subset, total_sum, number);

	

}

int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int num;
	cin>>num;

	vector<int> output;
	getSum(arr, 0, "", 0, num);

	return 0;
}

//Sample Input
//5
//10
//20
//30
//40
//50
//60

//Output
//10 20 30.
//10 50.
//20 40.