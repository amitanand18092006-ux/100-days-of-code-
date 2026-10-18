/*
Write a program to swap the first and last digit of a number.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n < 10 && n > -10) {
        cout << "Swapped number: " << n << endl;
        return 0;
    }

    long long temp = abs(n);
    int lastDigit = temp % 10;
    int digits = log10(temp);
    int firstDigit = temp / pow(10, digits);

    long long middle = (temp % (long long)pow(10, digits)) / 10;
    long long swapped = lastDigit * pow(10, digits) + middle * 10 + firstDigit;

    if (n < 0) swapped = -swapped;

    cout << "Swapped number: " << swapped << endl;
    return 0;
}/*
Write a program to check if a number is a perfect number.
*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }

    if (sum == n && n > 0)
        cout << n << " is a Perfect number." << endl;
    else
        cout << n << " is not a Perfect number." << endl;

    return 0;
}