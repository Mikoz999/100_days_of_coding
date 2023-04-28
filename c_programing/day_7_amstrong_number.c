/*100 DAYS OF CODING CHALLENGE */
/*DAY 7 : I have written a program that checks weather a number
 is an amstrong number or not*/

/*Amstrong number is a number in which each digit when 
  multiplied a number of times and finally added together, 
  results same number
Example, number 371 = (7*7*7 + 3*3*3 + 1*1*1) = 371
*/

#include <stdio.h>

int main(void)
{
    int num, count = 0, result = 0, mult = 1, cnt, rem;

    printf("Please enter a number:\n");
    scanf("%d", &num);

    int n = num;

    /*Count the number of digits in the input number*/
    while (n != 0) {
        n = n / 10;
        count++;
    }

    cnt = count;
    n = num;

    /* Calculate the sum of each digit raised to the power of
     the total count*/
    while (n != 0) {
        rem = n % 10;
        mult = 1;
        for (int i = 0; i < count; i++) {
            mult = mult * rem;
        }
        result = result + mult;
        n = n / 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
    
