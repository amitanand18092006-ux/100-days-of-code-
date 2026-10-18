/*
Write a program to find the product of odd digits of a number.
*/

#include <iostream>
using namespace std;

int main() {
    long long n;
    long long product = 1;
    bool hasOdd = false;
    cout << "Enter an integer: ";
    cin >> n;

    n = abs(n);
    if (n == 0) {
        product = 0;
        hasOdd = true;
    }

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = true;
        }
        n /= 10;
    }

    if (hasOdd)
        cout << "Product of odd digits: " << product << endl;
    else
        cout << "No odd digits found." << endl;

    return 0;
}/*
Write a program to find the 1’s complement of a binary number and print it.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '0') binary[i] = '1';
        else if (binary[i] == '1') binary[i] = '0';
    }

    cout << "1's Complement: " << binary << endl;
    return 0;
}