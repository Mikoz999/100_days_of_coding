/*100 DAYS OF CODING CHALLENGE */
/*DAY 8 : I have written a program that check for a leap year*/
/*A LEAP YEAR is a year 366 days*/

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) 
        printf("%d is a leap year.\n", year);
     else if(year % 100 == 0)
    
        printf("%d is a leap year.\n", year);
    else if (year % 4 == 0)
        printf("%d is a leap year. \n", year);
    else
        printf("%d is not a leap year. \n", year);   

    return 0;
}
