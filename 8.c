/*
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an Uppercase alphabet." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a Lowercase alphabet." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Digit." << endl;
    } else {
        cout << ch << " is a Special character." << endl;
    }
    return 0;
}/*
Write a program to input three numbers and find the largest among them using if–else.
*/

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << a << " is the largest." << endl;
    } else if (b >= a && b >= c) {
        cout << b << " is the largest." << endl;
    } else {
        cout << c << " is the largest." << endl;
    }
    return 0;
}