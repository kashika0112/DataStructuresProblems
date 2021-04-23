
#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l, j = h;
    do
    {
        do { i++; } while (arr[i] <= pivot);
        do { j--; } while (arr[j] > pivot);

        if (i < j) swap(&arr[i], &arr[j]);

    } while (i < j);
    swap(&arr[l], &arr[j]);

    return j;
}

void QuickSort(int arr[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(arr, l, h);
        QuickSort(arr, l, j);
        QuickSort(arr, j + 1, h);
    }
}

int main()
{
    int A[] = { 2,4,6,8,1,5,8 , 12, 4};
    int n = sizeof(A) / sizeof(A[0]);
    QuickSort(A,0, n );

    for (int x : A)
        cout << x << " ";
    return 0;
}
