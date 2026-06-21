#include <iostream>
#include <string>
using namespace std;

int main() {
    string UserName;
    string MatricNumber;
    string CourseNames[100]; 
    int Marks[100]; 
    int numCourses = 0;
    char grade;
    double totalMarks = 0.0;

    cout << "Hello! Please enter your UserName: ";
    getline(cin, UserName);
    cout << "Now enter your Matric Number: ";
    getline(cin, MatricNumber);

    cout << "**************************************************\n";
    cout << "     Hello " << UserName << "  :) " << endl;
    cout << "**************************************************\n";

    cout << "How many courses have you taken? ";
    cin >> numCourses;

    if (numCourses <= 0) {
        cout << "Invalid number of courses.\n";
        exit(0);
    }

    for (int i = 0; i < numCourses; i++) {
        cout << "Enter the course Name or code for Course " << (i + 1) << ": ";
        cin >> CourseNames[i];// trying to use getline put something wired happen in the output -_-
        cout << "Enter the Mark for " << CourseNames[i] << ": ";
        cin >> Marks[i];
        totalMarks += Marks[i];
    }

    cout << "----------------------------------------\n";
    cout << "Hello " << UserName << ", here is your report card:\n" <<	" ( "<< MatricNumber << " ) \n";
    cout << "----------------------------------------\n";

    for (int i = 0; i < numCourses; i++) {
        if (Marks[i] >= 80 && Marks[i] <= 100) {
            grade = 'A';
        } else if (Marks[i] >= 70 && Marks[i] < 80) {
            grade = 'B';
        } else if (Marks[i] >= 60 && Marks[i] < 70) {
            grade = 'C';
        } else if (Marks[i] >= 50 && Marks[i] < 60) {
            grade = 'D';
        } else if (Marks[i] < 50) {
            grade = 'F';
        } else {
            cout << "Invalid mark entered.\n";
            exit(0);
        }
        cout << CourseNames[i] << ": " << grade << endl;
    }

    double averageMark = totalMarks / numCourses;
    cout << "\nTotal Marks: " << totalMarks << endl;
    cout << "Number of Courses: " << numCourses << endl;
    cout << "Average Mark: " << averageMark << endl;

    return 0;
}

