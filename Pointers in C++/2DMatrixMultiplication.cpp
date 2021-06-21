#include <iostream>
using namespace std;

// 2D Matrix Multiplication Using Pointers

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int (*ptra)[10], (*ptrb)[10], (*ptrc)[10];
    ptra = A;
    ptrb = B;
    ptrc = C;
    int m, n, p;
    cout<<"Enter rows and columns for matrices"<<endl;
    cin>>m>>n>>p;
    cout<<"Enter values for matrix A"<<endl;
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j)
            cin >> ptra[i][j];
    }
    cout<<"Enter values for matrix B"<<endl;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < p; ++j)
            cin >>*(*(ptrb + i)+j);
    }
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < p; ++j)
            *(*(ptrc + i)+j) = 0;
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            for(int k=0; k<n; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    cout<<"Displaying C matrix after multiplication of A and B"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            cout<<*(*(ptrc + i)+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
