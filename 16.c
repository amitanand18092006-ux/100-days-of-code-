/*
Write a program to take a number as input and print its equivalent binary representation.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    long long binary = 0, place = 1;
    int temp = n;
    while (temp > 0) {
        int rem = temp % 2;
        binary += rem * place;
        place *= 10;
        temp /= 2;
    }

    cout << "Binary representation of " << n << " is: " << binary << endl;
    return 0;
}/*
Write a program to check if a number is a palindrome.
*/

#include <iostream>
using namespace std;

int main() {
    long long n, original, reversed = 0;
    cout << "Enter an integer: ";
    cin >> n;

    original = n;
    while (n > 0) {
        int rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }

    if (original == reversed)
        cout << original << " is a Palindrome." << endl;
    else
        cout << original << " is not a Palindrome." << endl;

    return 0;
}