/*
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char date[20];
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);
    
    char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    int dd, mm, yyyy;
    sscanf(date, "%d/%d/%d", &dd, &mm, &yyyy);
    
    if(mm >= 1 && mm <= 12) {
        printf("Formatted Date: %02d-%s-%d\n", dd, months[mm], yyyy);
    } else {
        printf("Invalid month in date!\n");
    }
    return 0;
}/*
Print all sub-strings of a string.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int len = strlen(str);
    printf("All substrings:\n");
    for(int i = 0; i < len; i++) {
        for(int j = i; j < len; j++) {
            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}