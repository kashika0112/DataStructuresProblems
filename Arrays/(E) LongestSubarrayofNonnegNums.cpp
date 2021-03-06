// LongestSubarrayofNonnegNums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream> 
using namespace std;

// Function that returns the longest  
// subarray of non-negative integers  
int longestSubarry(int* arr, int n)
{
    // Initialize result 
    int res = 0;

    // Traverse array 
    for (int i = 0; i < n; i++)
    {
        // Count of current  
        // non-negative integers 
        int curr_count = 0;

        while (i < n && arr[i] >= 0)
        {
            curr_count++;
            i++;
        }

        // Update result if required. 
        res = max(res, curr_count);
    }

    return res;
}

// Driver code 
int main()
{
    int arr[] = { 1, 0, 4, 0, 1, -1, -1, 0, 0, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << longestSubarry(arr, n);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
