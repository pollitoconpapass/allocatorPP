#include <iostream>
using namespace std;

void greeting(string name, int age){
    cout << "Hey, " << name << "! I've heard you're " << age << ". Amazing!" << endl;
}

void swap(int num1, int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "The values inside the functions are, num1: " << num1 << " num2: " << num2 << endl;
}

int main(){
    string name = "Bjarne";
    int age = 32;

    greeting(name, age);

    cout << "\nNow going to the swapping" << endl;
    int num1, num2;
    
    cout << "Enter number 1: "; cin >> num1;
    cout << "Enter number 2: "; cin >> num2;
    swap(num1, num2);

    cout << "\nNow (outside) the values are, num1: " << num1 << " num2: " << num2 << endl;
    return 0;
}