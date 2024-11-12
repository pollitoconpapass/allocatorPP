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
    student->grades = new double[student->numGrades];

    for(int i=0; i<student->numGrades; i++){
        cout << "Enter grade " << i + 1 << ": "; 
        cin >> student->grades[i];
    }
}

void calculateAverage(Student* student){
    double total = 0;

    for(int i=0; i<student->numGrades; i++){
        total+= student->grades[i];
    }

    student->average = total / student->numGrades;
    cout << "The student average is " << student->average << endl;
}

void findHighLow(Student* student){
    int high = student->grades[0];
    int low = student->grades[0];

    for(int i=1; i<student->numGrades; i++){
        if(student->grades[i] > high){
            high = student->grades[i];
        }

        if(student->grades[i] < low){
            low = student->grades[i];
        }
    }

    cout << "The lowest grade is: " << low << endl;
    cout << "The highest grade is: " << high << endl;
}

int main(){
    Student* studentOne = new Student;

    cout << "Insert the student's name: "; 
    cin >> studentOne->name;

    cout << "How many grades? "; 
    cin >> studentOne->numGrades;

    cout << "Now let's enter the grades" << endl;
    inputGrades(studentOne);
    cout << "Grades entered. Calculating..." << endl;

    // Average
    calculateAverage(studentOne);

    // Min and Max grade
    findHighLow(studentOne);

    // Clean up allocated memory
    delete[] studentOne->grades;
    delete studentOne;
    
    return 0;
}