/* 100 DAYS OF CODING CHALLENGE*/
/* DAY 1: Program that print all even numbers from 1to 20*/

#include <stdio.h>
int main(void) {
    int i, x = 1;
    for(i = 1; i<= 20; i++) {
        if (i == x) {
            x = x+2;
            continue;
        }
        printf("%d", i);
    }

}
