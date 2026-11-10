#include <iostream>
using namespace std;

void print_pattern(int n) {
    int i,j;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print_pattern2(int n) {
    int i,j; 
    for(i=1; i<=n; i++) {
        for(j=n-1; j>=i; j--) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number for the pattern: ";
    cin >> n;
    print_pattern(n);
    print_pattern2(n);
}
