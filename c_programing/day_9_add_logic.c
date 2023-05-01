/*100 DAYS OF CODING CHALLENGE */
/*DAY 9 : I have written c programm that adds without using "+"*/

#include <stdio.h>

int main() {
    int sum, carry, x, y;
    printf("Enter any two numbers:\n");
    scanf("%d %d", &x, &y);

    while (y != 0)
    {
        sum = x ^ y;
        carry = (x & y) << 1;
        x = sum;
        y = carry;
    }
    printf("sum of of x and y is: %d", sum);
    return 0;
}

