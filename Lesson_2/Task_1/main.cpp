#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Enter 5 numbers:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    int arr[] = {a,b,c,d,e};
    for(int i = 0; i < 5; i++){
        cout << arr[i];
        if(i < 4){
            cout << ',';
        }
    }
}
