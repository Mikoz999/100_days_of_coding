/*100 DAYS OF CODING CHALLENGE */
/*DAY 4: Today I have written a C Program to find the roots of any quadratic equation*/

#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, x1, x2, y, z;
    printf("Enter the coefficients a, b and C \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    y = (b * b) - (4 * a * c) ;


    z = sqrt(y) ;
    x1 = ((- b + z) / (2 * a)) ;
    x2 = ((- b - z) / (2 * a)) ;

    printf("The roots are, x1 = %f and x2 = %f", x1, x2);

}
