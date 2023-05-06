/*
 * 100 DAYS OF CODING CHALLENGE

 * DAY 12 : I have written c programm that check weather a
 * number appears more than once
 */

#include <stdio.h>

int main() {
    int seen[10] = {0};
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int rem;
    while(x != 0) {
        rem = x % 10;
        if(seen[rem] == 1) {
            printf("Yes");
            return 0;
        }
        seen[rem] = 1;
        x = x / 10;
    }
    printf("No");
    return 0;
}

