/*
Write a program to find the LCM of two numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, gcd, lcm;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    lcm = (a * b) / gcd;

    cout << "LCM is: " << lcm << endl;
    return 0;
}/*
Write a program to find the sum of digits of a number.
*/

#include <iostream>
using namespace std;

int main() {
    long long n;
    int sum = 0;
    cout << "Enter an integer: ";
    cin >> n;

    n = abs(n);
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}