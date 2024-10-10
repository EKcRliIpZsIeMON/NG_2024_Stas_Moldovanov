#include <iostream>

using namespace std;

void Tree(int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i - 1; ++j) {
            cout << ' ';
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << '*';
        }
        cout << endl;
    }
    
    
    for (int j = 0; j < height - 1; ++j) {
    cout << ' ' ;
    }
    cout << '*' ;
}

int main() {
    int height;
    cout << "Enter the height: ";
    cin >> height;
    Tree(height);
}