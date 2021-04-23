#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int A[], int n)
{
    for (int i = 0;i < n - 1;i++)
    {
        for (int j = 0; j < n - 1 - i;j++)
        {
            if (A[j] > A[j + 1])
                swap(&A[j], &A[j + 1]);
        }
    }
}

int main()
{
    int arr[] = { 5,8,9,2,1,3,5,7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);

    for (int x : arr)
        cout << x << " ";

    return 0;
}


