#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - a function used to print all natural numbers 0-98.
 *
 * @n: is assigned the variable for the first number to be printed.
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n <= 98)
while (n <= 98)
{
printf("%d", n);
if (n == 98)
{
printf("\n");
break;
}
printf(", ");
n++;
}
else
while (n >= 98)
{
printf("%d", n);
if (n == 98)
{
printf("\n");
break;
}
printf(", ");
n--;
}
}
