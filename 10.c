/*
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter side lengths of the triangle: ";
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && a + c > b) {
        if (a == b && b == c) {
            cout << "Equilateral Triangle" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Isosceles Triangle" << endl;
        } else {
            cout << "Scalene Triangle" << endl;
        }
    } else {
        cout << "Invalid triangle sides!" << endl;
    }
    return 0;
}/*
Write a program to display the day of the week based on a number (1–7) using switch-case.
*/

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6: cout << "Saturday" << endl; break;
        case 7: cout << "Sunday" << endl; break;
        default: cout << "Invalid day number!" << endl;
    }
    return 0;
}