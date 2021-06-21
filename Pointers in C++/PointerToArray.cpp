#include <iostream>
using namespace std;

//Pointer to an array -: It is a single pointer to an array of ten integer.
//It is different from array of pointers
// Syntax = data_type (*var_name)[size_of_array];  NOTE-: size_of_array represents number of columns in 2D arrays

//Note : The pointer that points to the 0th element of array and the pointer that points to the whole array are totally different.
//The following program shows this:

int main()
{
	int A[5] = {2, 4, 6, 8, 10};
	int (*ptr)[5] = &A;
	cout<<**ptr<<endl;
	for(int i=0; i<5;i++){
		cout<<*(*ptr + i)<<" ";
	}
	cout<<endl;
	int arr[3][4] = { {2,3,4,5},
                      {6,7,8,9},
                      {1,2,3,4}};
    cout<<arr[0][0]+1<<endl;
    cout<<*(&arr[0][0] + 1)<<endl;
    cout<<*(arr[0]+1)<<endl;
    cout<<**(arr+1)<<endl;
    cout<<**(&arr[0]+1)<<endl;
    //Note-: arr[0] = &arr[0][0]
    //       arr[1] = &arr[1][0]
    //       arr = &arr[0]
    cout<<"Matrix"<<endl;
    int (*parr)[4] = arr;  //NOTE-: Here the size represents the number of columns
    for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            cout<<*(*(parr + i)+j)<<" ";
        }
        cout<<endl;
    }

    //NOTE-:
    // 1. *(ptr + i) = ptr[i]
    // 2. *(*(ptr + i)+j) = *(ptr+i)[j] = ptr[i][j]

	return 0;
}
