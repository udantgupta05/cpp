#include <iostream>
using namespace std;

void print_pattern(int n) {
    int i, j;
    for(i=n; i>=1; i--) {
        for(j=1; j<=i; j++) { 
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number to print the pattern: ";
    cin >> n;
    print_pattern(n);
}
