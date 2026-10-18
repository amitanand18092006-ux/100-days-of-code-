/*
Write a program to input an integer and check whether it is even or odd using if–else.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is Even." << endl;
    } else {
        cout << num << " is Odd." << endl;
    }
    return 0;
}/*
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num >= 0) {
        if (num == 0) {
            cout << "The number is Zero." << endl;
        } else {
            cout << "The number is Positive." << endl;
        }
    } else {
        cout << "The number is Negative." << endl;
    }
    return 0;
}