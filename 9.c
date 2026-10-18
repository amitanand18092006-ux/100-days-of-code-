/*
Write a program to find the roots of a quadratic equation and categorize them.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << " and Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }
    return 0;
}/*
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/

#include <iostream>
using namespace std;

int main() {
    double percentage;
    cout << "Enter percentage (0-100): ";
    cin >> percentage;

    if (percentage < 0 || percentage > 100) {
        cout << "Invalid percentage!" << endl;
    } else if (percentage >= 90) {
        cout << "Grade A" << endl;
    } else if (percentage >= 80) {
        cout << "Grade B" << endl;
    } else if (percentage >= 70) {
        cout << "Grade C" << endl;
    } else if (percentage >= 60) {
        cout << "Grade D" << endl;
    } else {
        cout << "Grade F" << endl;
    }
    return 0;
}