/*
Write a program to print the sum of the first n odd numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= 2 * n; i += 2) {
        sum += i;
    }
    cout << "Sum of first " << n << " odd numbers is: " << sum << endl;
    return 0;
}/*
Write a program to print the product of even numbers from 1 to n.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    long long product = 1;
    bool hasEven = false;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = true;
    }

    if (hasEven) {
        cout << "Product of even numbers from 1 to " << n << " is: " << product << endl;
    } else {
        cout << "No even numbers in the range 1 to " << n << "." << endl;
    }
    return 0;
}