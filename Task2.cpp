#include <iostream>
using namespace std;
void printUpperPart( int );
void printLowerPart( int );

int main() {
    cout << "Enter the desired number of rows: ";
    int n;
    cin >> n;
    printUpperPart(n);
    printLowerPart(n);
    return 0;
}

void printUpperPart(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printLowerPart(int n) {
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}