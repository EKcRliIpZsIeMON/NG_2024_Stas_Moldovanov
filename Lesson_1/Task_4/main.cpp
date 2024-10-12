#include <iostream>

using namespace std;

int main() {
    double salary;
    cout << "Enter your salary: ";
    cin >> salary;

    const char* messages[] = {
        "You need to work harde",
        "You are well done",
        "You are a millionaire"
    };

    int index = (salary < 1000) * 0 +
                (salary >= 1000 && salary < 1000000) * 1 +
                (salary > 1000000) * 2;
                
    cout << messages[index];
}
