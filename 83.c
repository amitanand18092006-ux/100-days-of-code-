/*
Create an enum for months and print how many days each month has.
*/

#include <stdio.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *months[] = {"", "January", "February", "March", "April", "May", "June", 
                      "July", "August", "September", "October", "November", "December"};

    for (int m = JAN; m <= DEC; m++) {
        printf("%s has %d days.\n", months[m], days[m]);
    }

    return 0;
}