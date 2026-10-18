/*
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+': cout << "Result: " << num1 + num2 << endl; break;
        case '-': cout << "Result: " << num1 - num2 << endl; break;
        case '*': cout << "Result: " << num1 * num2 << endl; break;
        case '/': 
            if (num2 != 0) cout << "Result: " << num1 / num2 << endl;
            else cout << "Error! Division by zero." << endl;
            break;
        case '%': 
            if ((int)num2 != 0) cout << "Result: " << (int)num1 % (int)num2 << endl;
            else cout << "Error! Modulo by zero." << endl;
            break;
        default: cout << "Invalid operator!" << endl;
    }
    return 0;
}/*
Write a program to print numbers from 1 to n.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}