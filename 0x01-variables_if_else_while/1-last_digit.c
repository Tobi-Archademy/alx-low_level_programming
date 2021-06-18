#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point for program
 *
 * Description: print all ints followed by ', '
 * using putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
int n, LastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
LastDigit = n % 10;
printf("Last digit of %i is %i ", n, LastDigit);
if (LastDigit > 5)
{
printf("and is greater than 5\n");
}
else if (LastDigit < 6 && LastDigit != 0)
{
printf("and is less than 6 and not 0\n");
}
else if (LastDigit == 0)
{
printf("and is 0\n");
}
return (0);
}
