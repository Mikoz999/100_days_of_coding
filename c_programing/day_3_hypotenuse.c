/* DAY 3 OF MY 100 DAYS OF CODDING CHALLENGE */
/*DAY 3: program that calculates the hypotenuse of a right angle triangle*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    printf("please enter the base of the triangle, a:");
    scanf("%lf", &a);
    printf("please enter the height of the triangle, b:");
    scanf("%lf", &b);
    c = sqrt((a * a) + (b * b)) ;

    printf("The hypotenuse of the triangle is:%lf", c);
    return 0;
}
