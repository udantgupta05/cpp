#include <iostream>
using namespace std;

void print1(int n) {
    int i, j;
    for(i=0; i<=n; i++) {
        for(j=0; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number for the pattern: ";
    cin >> n;
    print1(n);
}