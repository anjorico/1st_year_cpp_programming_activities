#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 1;

    for (a = 1; a <= 10; a++) {
        for (b = 1; b <= 10; b++) {
            cout << b * a << "\t";
        }
        cout << "\n";
    }

    return 0;
}