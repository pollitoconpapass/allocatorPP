// === PREVIOUS EXPLANATIONS ===
// '*' inside a function -> is dereferencing the value
// '*' when it is an argument -> means we will be passing a pointer
// '&' -> is pointing to the address

#include <iostream>
using namespace std;

void swapNumbersByAddress(int *num1, int *num2){ // -> include the '*' in the arguments
    int temp = *num1;  // -> assigning the dereferenced value
    *num1 = *num2;
    *num2 = temp;

    cout << "\nInside the function the values are, num1: " << *num1 << " num2: " << *num2 << endl;
} 


int main(){
    int num1, num2;

    cout << "Enter number 1: "; cin >> num1;
    cout << "Enter number 2: "; cin >> num2;

    cout << "Numbers before the swapping, num1: " << num1 << " num2: " << num2 << endl;
    swapNumbersByAddress(&num1, &num2); // -> here you pass the address (different from 'passing by reference')

    cout << "\nNow (outside) the values are, num1: " << num1 << " num2: " << num2 << endl;
    // Here the changes stand as well...
    return 0;
}