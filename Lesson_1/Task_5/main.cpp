#include <iostream>

using namespace std;

void DrawTree(int treeHeight) {
    for (int row = 0; row < treeHeight; ++row) {
        for (int space = 0; space < treeHeight - row - 1; ++space) {
            cout << ' ';
        }
        for (int star = 0; star < 2 * row + 1; ++star) {
            cout << '*';
        }
        cout << endl;
    }

    for (int space = 0; space < treeHeight - 1; ++space) {
        cout << ' ';
    }
    cout << '*';
}

int main() {
    int height;
    cout << "Enter the height: ";
    cin >> height;
    DrawTree(height);
}
