// Write a function that takes an array by address and its size
// Reverse the elements of the array

#include <iostream>
using namespace std;

void reverseArray(int *arr, int size){
    int start = 0; // -> as we start counting the indexes in 0
    int end = size -1;  // -> as we start in 0, then the final index will stop in (totalSize - 1)

    while(start < end){
        int temp = arr[start]; // -> temp assigned to the 'first' value
        arr[start] = arr[end]; // -> now the 'first' element in the array will have the 'last' one
        arr[end] = temp; // -> and the 'last' one will have the temp (which was assigned to the 'first' value)

        start++; // -> the start increases in order to cover the whole array
        end--; // -> the end dicreases  "                                    "

        // obviously this will change the swapping explanation on the 'first' and 'last'
    }
}

int main(){
    int arr[5] = {5, 6, 7, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    reverseArray(arr, size); // -> arrays automatically decay into pointers when passed to functions,
                                //  while regular variables don't. (That's why we don't place the '&' before)

    /*
    This happens because:
        1. When you declare an array, the variable name actually represents the memory address of its first element
        2. Arrays are always passed by reference implicitly (they decay into pointers)
        3. The array name itself is essentially a pointer to its first element
    */

    cout << "Now the array is: " << endl;
    for(int x = 0; x < size; x++){
        cout << arr[x] << " | ";

    }

    return 0;
}