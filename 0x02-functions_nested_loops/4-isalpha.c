#include <stdio.h>
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
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && <= 122)
{
return (0);
}
