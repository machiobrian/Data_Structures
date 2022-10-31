#include <iostream>
using namespace std;

int main()
{
    //intializig an array

    // 1. Pass no value
    int arr[5]= {};

    // 2. Define the size of an array and pass values in it
    int arr1[5] = {1,2,3,4,5}; //arrai1 contains 5 elements

    int arr2[5] = {1,2,3}; //the rest of the missing values are assumed to be 0

    // 3. Pass in specific values within the initializer but nor declaring the size
    int arr3[] = {1,2,3,4,5};

    //4. Universal Initialization -> do away with the = sign
    int arr4[] {1,2,3,4,5};
    cout << arr4[3]; //random access to element 3
    
    // insertion
    arr4[3] = {10}; //insert the value 10 @ index 3
    cout << arr4[3];

    //accessing an element in an array
    return arr4[3];

    // searching an array - loop through a function
    

    // int names[10]; //names is an array variable
    // names[0] = 5;
    // cout << names[0];
    // return 0;




    
    
}