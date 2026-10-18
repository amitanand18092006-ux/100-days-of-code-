/*
Write a program to check if a number is an Armstrong number.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, remainder, digits = 0;
    double sum = 0;
    cout << "Enter an integer: ";
    cin >> n;

    original = n;
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if ((int)sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}/*
Write a program to check if a number is prime.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is a Prime number." << endl;
    else
        cout << n << " is not a Prime number." << endl;

    return 0;
}