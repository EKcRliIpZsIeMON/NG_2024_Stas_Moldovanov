#include <iostream>

using namespace std;

int main() {
    double salary;
    cout << "Enter your salary: ";
    cin >> salary;

    if (salary < 1000) {
        cout << "You need to work more" << endl;
    }
    if (salary > 999) {
        if (salary < 1000000) {
            cout << "You are doing great" << endl;
        }
    }
    if (salary > 999999) {
        cout << "You are a millionaire" << endl;
    }
}
