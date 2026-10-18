/*
Write a program to print the following pattern:
5
45
345
2345
12345
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= i + 4; j++) {
            cout << ((j > n) ? j - n : j);
        }
        cout << endl;
    }
    return 0;
}/*
Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < n - i; j++) cout << "*";
        cout << endl;
    }
    return 0;
}