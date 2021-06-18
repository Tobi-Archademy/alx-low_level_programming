#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n, LastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
LastDigit = n % 10;
if (LastDigit > 5)
{
printf("Last digit of %d is %d and is greater than %d\n", n, LastDigit, 5);
}
else if (LastDigit == 0)
{
printf("Last Digit of %d is %d and is %d\n", n, LastDigit, 0);
}
else if (LastDigit < 6 && LastDigit != 0)
{
printf("Last Digit of %d is %d and is less than %d and not %d\n",
n, LastDigit, 6, 0);
}
return (0);
}
