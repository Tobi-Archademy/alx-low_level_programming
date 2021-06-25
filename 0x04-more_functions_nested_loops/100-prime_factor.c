#include <stdio.h>
#include <math.h>
/**
 * main - entry point for program
 *
 * Maxprime - a function the largest factor of a number
 *
 * @num: takes the integer argument
 * Return: Always 0 (success)
 */

long long Maxprime(long long num)
{
long long CurrMaxprime = -1;
if (num % 2 == 0)
{
CurrMaxprime = 2;
while (num % 2 == 0)
{
num = num / 2;
}
}

for (long long i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
CurrMaxprime = i;
num = num / i;
}
}

if (num > 2)
CurrMaxprime = num;
return (CurrMaxprime);
}

int main(void) /*Description: main - entry point for program*/
{
long long x;
x = 612852475143;

printf("Largest prime factor of %lld is: %lld\n", x);
return (0);
}
