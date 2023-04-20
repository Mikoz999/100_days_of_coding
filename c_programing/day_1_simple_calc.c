#include <stdio.h>

/* 100 days of code : DAY 1/100 */
/* creating a calculator program using function pointers*/
float sum (float x, float y){return (x + y) ;}
float sub (float x, float y){return (x - y) ;}
float mult (float x, float y){return (x * y) ;}
float div (float x, float y){return (x / y) ;}

int main(void) {
    int choice;
    float x, y, result;

    printf("Select your choice; 0 for sum, 1 for sub, 2 for mult, 3 for div:\n");
    scanf("%d", &choice);
    printf("Enter any two numbers of your choice:\n") ;
    scanf("%f %f", &x, &y);

    switch(choice)
    {
        case 0: result = sum(x, y); break;
        case 1: result = sub(x, y); break;
        case 2: result = mult(x, y); break;
        case 3: result = div(x, y); break;
        default: printf("Invalid choice\n"); return 1;
    }

    printf("%f", result);
    return 0;
}
