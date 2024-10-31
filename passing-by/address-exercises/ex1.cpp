// Write a function that takes three integers by address and:
// - Doubles the first number
// - Triples the second number
// - Quadruples the third number

#include <iostream>
using namespace std;

void returnThreeNumbers(int *num1, int *num2, int *num3){
    int doubleNum = (*num1) * 2;
    int tripleNum = (*num2) * 3;
    int quadrupleNum = (*num3) * 4;

    cout << "\nNow the values are..." << endl;
    cout << "Num 1: " << doubleNum << endl;
    cout << "Num 2: " << tripleNum << endl;
    cout << "Num 3: " << quadrupleNum << endl;
}

int main(){
    int num1, num2, num3;

    cout << "Enter number 1: "; cin >> num1;
    cout << "Enter number 2: "; cin >> num2;
    cout << "Enter number 3: "; cin >> num3;

    returnThreeNumbers(&num1, &num2, &num3);
    return 0;
}