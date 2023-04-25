/*100 DAYS OF CODING CHALLENGE */
/*DAY 5: Today I have written a C Program that prints stars in a triangle pyramid*/

#include <stdio.h>

int main(void) {
    int i, j, k ;
    printf("How many no of raws do you want the pyramid to have\n");
    scanf("%d", &i);
    for(j = 1; j <= i; j++) {
        for(k =1; k <=(2 * i) - 1; k++) {
            if(k >= i-(j-1) && k <= i+(j-1)) {
                printf("*");
            }
            else {
                printf(" ");
            }
            
        }
	printf("\n");
    }
    return 0;
}
