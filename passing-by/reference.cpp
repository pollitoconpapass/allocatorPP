#include <iostream>
using namespace std;

void swapNumsByReference(int &num1, int &num2){ // -> here include the & to the arguments
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "\nInside the function the values are, num1: " << num1 << " num2: " << num2 << endl;
}

int main(){
    int num1;
    int num2;
    cout << "Enter 1st number: "; cin >> num1;
    cout << "Enter 2nd number: "; cin >> num2;
 
    swapNumsByReference(num1, num2);  // -> but pass the values 'normally' when calling the function
    cout << "\nNow (outside) the values are, num1: " << num1 << " num2: " << num2 << endl;
    // As you will see, the changes stand outside the function.
    return 0;
}