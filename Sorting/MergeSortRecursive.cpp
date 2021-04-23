
#include <iostream>
using namespace std;

void Merge(int A[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int B[20] = { 0 };

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    while (i <= mid)
        B[k++] = A[i++];
    while (j <= high)
        B[k++] = A[j++];

    for (int i = low;i <= high;i++)
        A[i] = B[i];

}

void MergeSort(int arr[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid+1, h);
        Merge(arr, l, mid, h);
    }
}

int main()
{
    int A[] = { 8,7,4,5,0,1,6 };
    int n = sizeof(A) / sizeof(A[0]);
    MergeSort(A, 0, n-1);

    for (int x : A)
        cout << x << " ";
    return 0;
}

