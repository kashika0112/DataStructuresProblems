
#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void SelectionSort(int arr[], int n)
{
    int i, j, k;
    for (i = 0;i < n - 1;i++)
    {
        for (j = k = i;j < n;j++)
        {
            if (arr[j] < arr[k])
                k = j;
        }
        swap(&arr[i], &arr[k]);
    }
}

int main()
{
    int A[] = { 8,7,3,10,9,4,12,5,2,7 };
    int n = sizeof(A) / sizeof(A[0]);
    SelectionSort(A, n);

    for (int x : A)
        cout << x << " ";
    return 0;
}

