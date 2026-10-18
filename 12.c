/*
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/

#include <iostream>
using namespace std;

int main() {
    int daysLate;
    double fine = 0;
    cout << "Enter number of late days: ";
    cin >> daysLate;

    if (daysLate <= 0) {
        cout << "No fine." << endl;
    } else if (daysLate <= 5) {
        fine = daysLate * 2.0;
        cout << "Fine: ₹" << fine << endl;
    } else if (daysLate <= 10) {
        fine = (5 * 2.0) + ((daysLate - 5) * 4.0);
        cout << "Fine: ₹" << fine << endl;
    } else if (daysLate <= 30) {
        fine = (5 * 2.0) + (5 * 4.0) + ((daysLate - 10) * 6.0);
        cout << "Fine: ₹" << fine << endl;
    } else {
        cout << "Membership Cancelled!" << endl;
    }
    return 0;
}/*
Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include <iostream>
using namespace std;

int main() {
    double units, bill = 0;
    cout << "Enter units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    cout << "Total Electricity Bill: ₹" << bill << endl;
    return 0;
}