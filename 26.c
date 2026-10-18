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
        for (int space = 1; space <= n - i; space++) cout << " ";
        for (int j = n - i + 1; j <= n; j++) cout << j;
        cout << endl;
    }
    return 0;
}/*
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n*\n\n*\n*\n*\n\n*\n*\n*\n*\n*\n\n*\n*\n*\n\n*\n" << endl;
    return 0;
}