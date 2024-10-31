// Create a structure for student grades and write functions to:
// - Input grades through pointers
// - Calculate average
// - Find highest and lowest grades

#include <iostream>
using namespace std;

struct Student {
    char name[50];
    double* grades;
    int numGrades;
    double average;
};

void inputGrades(Student* student){
    double arr[student->numGrades];

    for(int i=0; i<student->numGrades; i++){
        cout << "Enter grade " << i + 1 << ": "; cin >> *student->grades;
        arr[i] = *student->grades;
    }
}

void calculateAverage(Student* student){

}

void findHighLow(Student* student){

}

int main(){

    return 0;
}