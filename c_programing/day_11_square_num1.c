/**
 * 100 DAYS OF CODING CHALLENGE

 * DAY 11 : I have written c programm that finds the square of a 
 * number using functions
 */

#include <stdio.h>

/**
 * Function prototype for `func`.
 * This function accepts an integer parameter and 
 * returns an integer value.
 */
int func(int);


int main(void)
{
  int num1, square;

  printf("\n Enter a number: ");
  scanf("%d", &num1);

  
  square = func(num1);

  printf("\n Square of the number is: %d", square);

  return 0;
}

/**
 * This function takes an integer a * s a parameter and returns the 
 * square of that number.
 * @param a An integer value
 * @return The square of the input `a`.
 */

int func(int a)
{
  return a * a;
}

