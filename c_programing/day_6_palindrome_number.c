/*100 DAYS OF CODING CHALLENGE */                               

/*DAY: 6;
 Write a program that check weather a number is an palindrome number or not */

#include <stdio.h>
int main(void) {
    int n, q, rem, result = 0;
    printf("please enter the number of your choice\n");
    scanf("%d", & n);

    q = n;

    while(q != 0) {
        rem = q % 10;
        result = result * 10 + rem ;
        q = q / 10;
    }
    if(result == n)
        printf("The number is a palindrome");
    else
        printf("It's not a palindrome");
    return 0;
}
