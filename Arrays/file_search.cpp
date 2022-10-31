// search by linear traversal in an unsorted array

#include <bits/stdc++.h> //bits that has every standard lib, timesensitive
using namespace std;

//function to implement a search opertion
int findElement(int arr[], int n, int key)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == key)
            return i;

    //if the key is not found 
    return -1;
}

// Driver's code

int main()
{
    int arr[] {12, 34, 10, 6, 40}; //universal initialization of arrays
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n;

    // using last element as search element
    int key = 34;

    // function call
    int position = findElement(arr, n, key);

    if (position == -1)
        cout << "Element not Found";
    else
        cout << "Element Found at Position: "
                << position + 1;
    
    return 0;

    // cout << sizeof(arr);
}