// SubsequencesGFG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Recursive function to print all 
// possible subsequences for given array 
void printSubsequences(vector<int> arr, int index,
    vector<int> subarr)
{
    // Print the subsequence when reach 
    // the leaf of recursion tree 
    if (index == arr.size())
    {
        int l = subarr.size();

        // Condition to avoid printing 
        // empty subsequence 
        //if (l != 0)
        printArray(subarr, l);
    }
    else
    {
        // Subsequence without including 
        // the element at current index 
        printSubsequences(arr, index + 1, subarr);

        subarr.push_back(arr[index]);

        // Subsequence including the element 
        // at current index 
        printSubsequences(arr, index + 1, subarr);
    }
    
}

// Driver Code 
int main()
{
    vector<int> arr{ 1, 2, 3 };
    vector<int> b;

    printSubsequences(arr, 0, b);

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
