/*
Write a program to print all the prime numbers from 1 to n.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << i << " ";
    }
    cout << endl;
    return 0;
}/*
Read and print elements of a one-dimensional array
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}