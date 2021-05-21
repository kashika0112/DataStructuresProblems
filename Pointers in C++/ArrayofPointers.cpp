#include <iostream>
using namespace std;

//Array of Pointers

int main()
{
	cout<<"Array of Pointers"<<endl;
	cout<<endl;
	int *arr[5];
	int n1 = 10, n2 = 20, n3 = 30, n4 = 40, n5 = 50;
	arr[0] = &n1;
	arr[1] = &n2;
	arr[2] = &n3;
	arr[3] = &n4;
	arr[4] = &n5;

	cout<<"Address of n3: "<<arr[2]<<endl;
	cout<<"Address at 2nd index: "<<*arr[2]<<endl;

	cout<<endl;

	int arr1[] = {1, 2, 3};
	int arr2[] = {10, 20, 30, 40};
	int arr3[] = {100, 200};

	int *ptr[3] = {arr1, arr2, arr3};
	cout<<"Address at index 1: "<<ptr[1]<<endl;
	cout<<"Values: ";
	for(int i=0; i<3; i++){
		cout<<*ptr[i]<<" ";
	}
	cout<<endl;
	cout<<"Accessing other elements: ";
	cout<<*(ptr[1] + 1)<<endl;
	cout<<endl;

	//Array of character Pointers
	const char *names[3] = {"Aanya", "Bhavini", "Dariya"};
	cout<<"Address: "<<names<<endl;
	cout<<"Value: "<<*names<<endl;
	cout<<"Value: "<<*(names + 1)<<endl;
	cout<<"Value: "<<*names[0]<<endl;
	return 0;

	
}