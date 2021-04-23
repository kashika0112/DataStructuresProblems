#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    int i, j, x;
    for (i = 1;i < n;i++)
    {
        x = arr[i];
        j = i - 1;
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

int main()
{
    int A[] = { 8,7,5,4,6,3,5 };
    int n = sizeof(A) / sizeof(A[0]);
    InsertionSort(A, n);

    for (int x : A)
        cout << x << " ";
    return 0;
}

