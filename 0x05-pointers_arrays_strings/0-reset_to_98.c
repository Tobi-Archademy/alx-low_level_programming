#include "holberton.h"
#include <stdio>
/**
 * reset_to_98 - set the integer to 402
 * @n: a pointer the integer we want to set to 402
 *
 * Return: nothing
 */
void reset_to_98(int *n)
{
printf("Value of 'n': %p\n", n);
printf("Address of 'm': %p\n", &n);

*n = 98;
}
