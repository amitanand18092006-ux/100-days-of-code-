/*
Write a program to display the month name and number of days using switch-case for a given month number.
*/

#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1: cout << "January: 31 days" << endl; break;
        case 2: cout << "February: 28/29 days" << endl; break;
        case 3: cout << "March: 31 days" << endl; break;
        case 4: cout << "April: 30 days" << endl; break;
        case 5: cout << "May: 31 days" << endl; break;
        case 6: cout << "June: 30 days" << endl; break;
        case 7: cout << "July: 31 days" << endl; break;
        case 8: cout << "August: 31 days" << endl; break;
        case 9: cout << "September: 30 days" << endl; break;
        case 10: cout << "October: 31 days" << endl; break;
        case 11: cout << "November: 30 days" << endl; break;
        case 12: cout << "December: 31 days" << endl; break;
        default: cout << "Invalid month number!" << endl;
    }
    return 0;
}/*
Write a program to find profit or loss percentage given cost price and selling price.
*/

#include <iostream>
using namespace std;

int main() {
    double cp, sp, diff;
    cout << "Enter Cost Price and Selling Price: ";
    cin >> cp >> sp;

    if (sp > cp) {
        diff = sp - cp;
        double profitPercent = (diff / cp) * 100;
        cout << "Profit = " << profitPercent << "%" << endl;
    } else if (cp > sp) {
        diff = cp - sp;
        double lossPercent = (diff / cp) * 100;
        cout << "Loss = " << lossPercent << "%" << endl;
    } else {
        cout << "No Profit, No Loss." << endl;
    }
    return 0;
}