#include <iostream>
using namespace std;

// search for the key to e deleted
int findElement(int arr[], int n, int key)
{
    int i;
    for (i=0; i<n; i++)
    
        if (arr[i]==key)
            return i;

    //if key isnt found 
    return -1;
    
}

//call the search element code
int findElement(int arr[], int n, int key);

// function to delete an element
int deleteElement(int arr[], int n, int key)
{
    // Find the postion of the element to be deleted
    int pos = findElement(arr, n, key);

    if (pos == -1){
        cout << "Element not Found";
        return n;
    }

    // Deleting an Element
    int i;
    for (i = pos; i<n-1; i++)
    
        arr[i] == arr[i+1];

    return n-1;
}

// Driver's Code
int main()
{
    int i;
    int arr[] = {10, 50, 30, 40, 20};

    int n = sizeof(arr) / sizeof(arr[4]);

    // cout << sizeof(arr[5]); // 4
    // cout << sizeof(arr); // 4x5 elements = 20
    int key = 30;

    cout << "Array before Deletion : \n";

    for (i=0; i<n;i++)
        cout << arr[i] << " ";

    // Function Call
    n = deleteElement(arr, n, key);

    cout << "\n\n Array After Deletion\n: ";
    for (i=0;i<n; i++)
        cout << arr[i]<< " ";

    return 0;
}