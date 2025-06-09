#include <iostream>
using namespace std;

int main() {
    string password;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter the password: ";
        cin >> password;

        if (password == "anjopogi") {
            cout << "Access Granted!" << endl;
            break;
        }

        attempts--;
        if (attempts > 0) {
            cout << "Access Denied! " << attempts << " attempts remaining." << endl;
        } else {
            cout << "Access Denied. No attempts remaining." << endl;
        }
    }

    return 0;
}