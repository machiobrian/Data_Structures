#include <bits/stdc++.h>
using namespace std;

//function to insert element at a sp. position

void insertElement(int arr[], int n, int x, int pos)

{
    //shift elements on the right side of the position 
    // to the right

    for (int i= n-1; i>=pos; i--)
        arr[i+1] = arr[i];

    arr[pos] = x;
}

//Driver code
int main()
{
    int arr[15] { 2, 4, 1, 8, 5 };
    int n = 5;

    cout << endl;

    int x = 10, pos = 2;

    // Function Call
    insertElement(arr, n, x, pos);
    n++;

    cout << "After Insertion : ";
    for (int i =0; i<n; i++)
        cout<<arr[i]<< " ";
    
    return 0;
}