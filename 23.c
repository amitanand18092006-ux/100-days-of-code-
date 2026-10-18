/*
Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;
    cout << "Enter number of terms (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double numerator = 2 * i;
        double denominator = 4 * i - 1;
        sum += numerator / denominator;
    }

    cout << "Sum of series: " << sum << endl;
    return 0;
}/*
Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include <iostream>
using namespace std;

int main() {
    int rows = 5, cols = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}