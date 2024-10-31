// Write a function that finds both the minimum and maximum values in an array
// Return them through pointer parameters

#include <iostream>
using namespace std;


void findMinMax(int *arr, int size){
    int min = arr[0];
    int max = arr[size -1];

    for(int i=0; i < size; i++){
        if(arr[i] <= min){
            min = arr[i];
        }
    }

    for(int j=0; j< size; j++){
        if(arr[j] >= max){
            max = arr[j];
        }
    }

    cout << "\nThe minimum number is " << min << endl;
    cout << "The maximum number is " << max << endl;
}

int main(){
    int arr[5] = {3, 1, 6, 75, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findMinMax(arr, size);
    return 0;
}