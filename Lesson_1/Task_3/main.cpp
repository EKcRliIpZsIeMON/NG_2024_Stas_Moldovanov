#include <iostream>

using namespace std;

int main() {
    int num1, num2, res;
    char math;
    
    cout << "Calculator" << endl << "Enter number 1: " ;
    cin >> num1;
    cout << "Enter number 2: " ;
    cin >> num2;

    cout << "Enter char(+, -, , /): " ;
    cin >> math;
    
    switch(math) {
    case '+': res = num1 + num2; break ;
    case '-': res = num1 - num2; break ;
    case '*': res = num1 * num2; break ;
    case '/': res = num1 / num2; break ;
    }
    cout << res;
}
