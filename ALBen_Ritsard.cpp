#include <iostream>    //cc103 final project by Alejandro Rico and Benz Ghibert Garcia BSIT-A
#include <limits>
using namespace std;

class Student {
private:
    string name;
    string subjects[20];
    double grades[20];
    int numSubjects;

public:
    void Data() {
        cout << "Enter Name: ";
        getline(cin, name);
        system("cls");

        cout << "Enter number of subjects (max 20): ";
        while (!(cin >> numSubjects) || numSubjects <= 0 || numSubjects > 20) {
            cout << "Invalid input! Enter a number between 1 and 20: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore(); 
        system("cls");

        for (int x = 0; x < numSubjects; x++) {
            cout << "\nSubject " << x + 1 << ": ";
            cout << "\nSubject Name: ";
            getline(cin, subjects[x]);

            bool valid = false;
            while (!valid) {
                cout << "Subject Grade " << ": ";
                cin >> grades[x];

                if (cin.fail() || grades[x] < 1.0 || grades[x] > 5.0) {
                    cout << "Invalid input! Please enter a grade between 1.00 and 5.00.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else {
                    valid = true;
                    cin.ignore(); 
                    system("cls"); 
                }
            }
        }
    }

    double GWACAL() {
        double gwa = 0;
        for (int x = 0; x < numSubjects; x++) {
            gwa += grades[x];
        }
        return gwa / numSubjects;
    }

    bool failed() {
        for (int x = 0; x < numSubjects; x++) {
            if (grades[x] > 3.00) {
                return true;
            }
        }
        return false;
    }

    void resultdplay() {
        double gwa = GWACAL();
        for (int x = 0; x < numSubjects; x++) {
        cout << "Subject " << x + 1 << endl;
        cout << "Subject Name: " << subjects[x] << endl;
        cout << "Subject Grade: "<< grades[x] << endl;
        cout<<endl;
    }
    
        cout << "\n--------------------------------------------\n";
        cout << "Displaying GWA details:"<<endl;
        cout << "The GWA of "<< name <<" is: "<< gwa << endl;
        if (failed()) {
            cout << "(FAILED)";
        } else {
            cout << "(PASSED)";
        }
        cout << "\n==================END=======================\n";
    }
};

int main() {
    Student alben;
    alben.Data();
    alben.resultdplay();
    return 0;
}
