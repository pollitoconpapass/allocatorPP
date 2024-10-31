// Write a function that creates a dynamic array of size n
// Fill it with squares of numbers from 1 to n
// Return the array through a pointer parameter

#include <iostream>
using namespace std;

void createSquareArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] = i *i;
    }
}

int main(){
    int size;
    cout << "Enter the array size: "; cin >> size;

    int arr[size] = {};
    createSquareArray(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " | ";
    }

    return 0;
}