/*100 DAYS OF CODING CHALLENGE */
/*DAY 10 : I have written c programm that print Floyd's Triangle*/

#include <stdio.h>

int main(void)
{
    int x, y, raws, n=1;
    printf("Enter the number of raws: ");
    scanf("%d", &raws);

    for(x = 1; y <= raws; x++)
    {
        for(y = 1; y <= x; y++)
        {
            printf("%d", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
