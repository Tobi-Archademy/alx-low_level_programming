#include "holberton.h"
/**
 * _isalpha - a function used to check if an alphabet is of upper or lowercase.
 *
 * @c: takes in the argument.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
