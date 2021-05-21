#include <iostream>
using namespace std;

int firstIndexRecursive(int arr[],int n,int x,int idx)
{
    if(idx==n)
        return -1;

    else
    {
        if(arr[idx]==x)
            return idx;
        return firstIndexRecursive(arr,n,x,idx+1);
    }

}

int lastIndexRecursive(int arr[],int n,int x, int idx)
{
    if(idx==n)
        return -1;
    int index=lastIndexRecursive(arr,n,x,idx+1);
    if(index==-1)
    {
        if(arr[idx]==x)
            return idx;
        else return -1;
    }
    else
        return index;

}
int main()
{
    int arr[]={1,2,3,2,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=2;

    cout<<"First Index "<<firstIndexRecursive(arr,n,x,0)<<endl;

    cout<<"Last Index "<<lastIndexRecursive(arr,n,x,0)<<endl;
    return 0;
}
