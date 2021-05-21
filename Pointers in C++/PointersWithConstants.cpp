#include <iostream>
using namespace std;

//Pointers With Constants

int main()
{
	//CONSTANT POINTER - Pointer whose address can't be changed i.e. it cannot point to any other variable

	cout<<"Constant Pointer"<<endl;
	int a = 10, b = 30;
	int * const ptr1 = &a;
	cout<< *ptr1 <<endl;
	*ptr1 = 20;
	cout<< *ptr1 <<endl;
	//ptr1 = &b; --- COMPILE TIME ERROR

	cout<<endl;

	//POINTER TO CONSTANT - A pointer pointing to a variable which is constant and whose value cannot be changed.
						// However, the pointer is free to point to any location
	cout<<"Pointer to Constant"<<endl;
	int const num1 = 100, num2 =500;
	const int * ptr2 = &num1; //Read-only Location
	cout<<*ptr2<<endl;
	//*ptr2 = 200;  --- COMPILE TIME ERROR
	ptr2 = &num2;
	cout<<*ptr2<<endl;

	cout<<endl;

	//CONSTANT POINTER TO CONSTANT - A constant pointer pointing to a constant variable i.e. neither the address of the pointer nor the value of variable can be changed.
	cout<<"Constant Pointer to Constant"<<endl;
	int const n1 = 235;
	int const * const p1 = &n1; //Read only location
	cout<< *p1 <<endl;
	//*p1 = 335; --- COMPILE TIME ERROR
    //p1 = &num1; --- COMPILE TIME ERROR


	return 0;
}
