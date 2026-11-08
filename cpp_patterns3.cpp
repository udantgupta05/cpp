// #include <iostream>
// using namespace std;

// void print1(int n) {
//     int i, j, num=1;
//     for(i=1; i<=n; i++) {
//         for(j=1; j<=i; j++) {
//             cout << i;
//         }
//         num++;
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter a number for the pattern: ";
//     cin >> n;
//     print1(n);
// } 

//efficient code down:- 

#include <iostream>
using namespace std;

void print_pattern(int n) {
    int i, j;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            cout << i;
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