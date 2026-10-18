/*
Write a program to check if a number is a strong number.
*/

#include <iostream>
using namespace std;

int main() {
    int n, original, sum = 0;
    cout << "Enter an integer: ";
    cin >> n;

    original = n;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }

    if (sum == original && original > 0)
        cout << original << " is a Strong number." << endl;
    else
        cout << original << " is not a Strong number." << endl;

    return 0;
}/*
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;
    cout << "Enter number of terms (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = 2 * i;
        sum += numerator / denominator;
    }

    cout << "Sum of series: " << sum << endl;
    return 0;
}