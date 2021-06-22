#include "holberton.h"
/**
 * _islower - a function used check if an alphabet is of upper or lowercase.
 *
 * @c: takes in the argument.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
