// insert an element at the end of an unsorted array

#include <iostream>
using namespace std;

// inserts a key in arr[] og givrn capacity
// n is the current size of the array
// function returns  n+1 if insertion is a success

int insertSorted(int arr[], int n, int key, int capacity)
{
    // do not insert any more elements if n is already incapacitated
    if ( n>= capacity)
        return n; //current size of array
    
    arr[n] = key;
    return (n+1);
}

// Driver Code
int main()
{
    int arr[12] { 12, 16, 20, 40, 50, 70 };
    int capacity = sizeof(arr) / sizeof(arr[0]);
    // int n = 6;
    // int i, key = 26; //value to insert


    int n = 7;
    int i, key = 264; //value to insert

    // cout << size(arr); //vs
    cout << sizeof(arr);

    //inserting key
    n = insertSorted(arr, n, key, capacity);

    cout << "\n After Insertion: ";

    for (i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;


}