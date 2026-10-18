/*
Find the sum of array elements.
*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of array elements: " << sum << endl;
    return 0;
}/*
Find the maximum and minimum element in an array.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) return 0;

    int arr[n];
    cout << "Enter elements: ";
    cin >> arr[0];
    int maxVal = arr[0], minVal = arr[0];

    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }

    cout << "Maximum element: " << maxVal << endl;
    cout << "Minimum element: " << minVal << endl;
    return 0;
}