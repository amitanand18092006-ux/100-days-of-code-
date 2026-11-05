/*
Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
*/

#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%s: %d\n", days[i], i);
    }

    return 0;
}