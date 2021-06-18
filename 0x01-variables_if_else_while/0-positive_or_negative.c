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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("None of the values matches\n");
}
return (0);
}
