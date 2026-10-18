/*
Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year." << endl;
    } else {
        cout << year << " is not a Leap Year." << endl;
    }
    return 0;
}/*
Write a program to input a character and check whether it is a vowel or consonant using if–else.
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Convert to lowercase for easier comparison
    char lowerCh = tolower(ch);

    if (isalpha(lowerCh)) {
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            cout << ch << " is a Vowel." << endl;
        } else {
            cout << ch << " is a Consonant." << endl;
        }
    } else {
        cout << "Invalid input! Not an alphabet letter." << endl;
    }
    return 0;
}