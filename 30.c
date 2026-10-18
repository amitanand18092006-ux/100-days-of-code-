/*
Count even and odd numbers in an array.
*/

#include <iostream>
using namespace std;

int main() {
    int n, evenCount = 0, oddCount = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) evenCount++;
        else oddCount++;
    }

    cout << "Even numbers count: " << evenCount << endl;
    cout << "Odd numbers count: " << oddCount << endl;
    return 0;
}/*
Count positive, negative, and zero elements in an array.
*/

#include <iostream>
using namespace std;

int main() {
    int n, pos = 0, neg = 0, zero = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
    }

    cout << "Positive count: " << pos << endl;
    cout << "Negative count: " << neg << endl;
    cout << "Zero count: " << zero << endl;
    return 0;
}