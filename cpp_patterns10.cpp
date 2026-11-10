#include <iostream>
using namespace std;

void print_pattern(int n) {
    int i, j, start=1;
    for(i=1; i<=n; i++) {
       if(i % 2 == 0) {
        start = 0;
    }
        else {
            start = 1;
        } 
        for(j=1; j<=i; j++) {
            cout << start;
            start = 1-start;
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
