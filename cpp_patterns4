#include <iostream>
using namespace std;

void print_pattern(int n) {
    int i, j;
    for(i=1; i<=n; i++) {
        for(j=n; j>=i; j--) {  // 2nd way ->for(j=1; j<n-i+1; j++)
            cout << "*";
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
