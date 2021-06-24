#include "holberton.h"
/**
 * print_most_numbers - a function used to print numbers, skipping 2 and 4.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int n = 0;
while (n < 10)
{

if (n == 2 || n == 4)
{
n++;
continue;
}
n++;
_putchar(n + '0');
}
_putchar('\n');
}
