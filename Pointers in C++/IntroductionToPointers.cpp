#include <iostream>
using namespace std;

int main()
{
	//Pointer to a variable
	int x, *ptr;
	x = 10;
	ptr = & x;

	cout<<"Size of x: "<<sizeof(x)<<" Size of ptr: "<<sizeof(ptr)<<endl;
	cout<<x<<" "<<*ptr<<endl;

	*ptr = 25;
	cout<<x<<endl;

	x = 100;
	cout<<*ptr<<endl;

	//Pointer to an array

	int num[5];
	int * p;
	p = num;      //Note-: p = &num is INVALID as the name of an array acts as its address

	*p = 10;

	p++;
	*p = 20;

	p = &num[2];
	*p = 30;

	p = num + 3;
	*p = 40;

	p = num;
	*(p + 4) = 50;

	cout<<"Array num is: ";
	p = num;
	for(int i =0; i<5;i++){
		cout<<*(p + i)<<" ";
	}


	return 0;
}