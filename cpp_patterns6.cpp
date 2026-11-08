#include <iostream>
using namespace std;

void print_pattern(int n) {
    int i,j;
    for(i=0; i<n; i++) {
        for(j=0; j<n-i-1; j++) {
            cout << " ";
        }
        
        for(j=0; j<2*i+1; j++) {
            cout << "*";
        }
        
        for(j=0; j<n-i-1; j++) {
            cout << " ";
        }
        
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number for the pattern: ";
    cin >> n;
    print_pattern(n);
}
