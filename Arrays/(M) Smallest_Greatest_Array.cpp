// Smallest_Greatest_Array.cpp 

#include <iostream>
#include <set>
using namespace std;

int* smallestGreater(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    for (int i = 0; i < n; i++)
    {
        auto it = s.find(arr[i]);
        it++;
        if (it != s.end())
            arr[i] = *it;
        else
            arr[i] = -10000000;
    }
    return arr;
    
}

// Driver code
int main()
{
    int ar[] = { 13,6,7,12 };
    int n = sizeof(ar) / sizeof(ar[0]);
    int* b;
    b=smallestGreater(ar, n);
    for (int i = 0;i < n;i++)
    {
        if (b[i] == -10000000)
            cout << "_ ";
        else
            cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}

