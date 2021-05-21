#include <iostream>
using namespace std;

int allIndicesRecursive(int input[], int Size,int x, int output[])
{
    if(Size==0)
        return 0;

    int smallAns=allIndicesRecursive(input+1,Size-1,x,output);
    if(input[0]==x)
    {
        for(int i=smallAns-1;i>=0;i--)
            output[i+1]=output[i]+1;

        output[0]=0;
        smallAns++;
    }
    else
    {
        for(int i=smallAns-1;i>=0;i--)
            output[i]=output[i]+1;
    }
    return smallAns;
}


void allIndices(int input[], int n, int x)
{
    int output[n];
    int Size=allIndicesRecursive(input, n,x,output);

    for(int i=0;i<Size;i++)
        cout<<output[i]<<" ";
}

int main()
{
    int arr[]={1,2,3,2,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=2;
    allIndices(arr,n,x);
    return 0;
}
