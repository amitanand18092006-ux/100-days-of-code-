/*
Write a program to calculate the factorial of a number.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }
    return 0;
}/*
Write a program to reverse a given number.
*/

#include <iostream>
using namespace std;

int main() {
    long long n, reversedNumber = 0;
    cout << "Enter an integer: ";
    cin >> n;

    long long temp = n;
    while (temp != 0) {
        long long remainder = temp % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        temp /= 10;
    }

    cout << "Reversed Number = " << reversedNumber << endl;
    return 0;
}