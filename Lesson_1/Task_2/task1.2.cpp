#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char char1;

    cout << "input number1" ;
    cin >> num1;
    cout << "input number2" ;
    cin >> num2;

    cout << "input(+, -, , )" ;
    cin >> char1;

    double resul;
    switch (char1) {
    case '+':
        resul = num1 + num2;
        cout << "Результат: " << resul << endl;
    case '-':
        resul = num1 - num2;
        cout << "Resul: " << resul << endl;
    case '*':
        resul = num1 * num2;
        cout << "Resul: " << resul << endl;
    case '/':
        if (num2 != 0) {
            resul = num1 / num2;
            cout << "Resul: " << resul << endl;
        } else {
            cout << "Error: division by zero" << endl;
        }
    }
}
