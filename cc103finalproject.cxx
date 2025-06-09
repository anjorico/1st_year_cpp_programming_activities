
#include <iostream>
#include <string>
using namespace std;

// Structure for each subject
struct Subject {
    string name;
    double grade;
};

int main() {
    string studentName;
    Subject subjects[8];
    double totalGrades = 0;
    double gwa;
    bool hasFailed = false;

    // Get student name
    cout << "Enter student's name: ";
    getline(cin, studentName);

    // Get subject names and grades
    for (int i = 0; i < 8; i++) {
        cout << "\nEnter name of Subject " << i + 1 << ": ";
        getline(cin, subjects[i].name);

        cout << "Enter grade for " << subjects[i].name << ": ";
        cin >> subjects[i].grade;
        cin.ignore(); // clear newline character

        totalGrades += subjects[i].grade;

        if (subjects[i].grade < 75) {
            hasFailed = true;
        }
    }

    gwa = totalGrades / 8;

    // Display results
    cout << "\n----------------------------";
    cout << "\nStudent Name: " << studentName;
    cout << "\nGWA: " << gwa;

    if (hasFailed) {
        cout << "\nStatus: FAILED (One or more subjects below 75)";
    } else {
        cout << "\nStatus: PASSED";
    }

    cout << "\n----------------------------\n";

    return 0;
}



