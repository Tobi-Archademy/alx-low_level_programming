#include <stdio.h>
#include "holberton.h"
/**
 *string_toupper - a function that changes a string to uppercase
 *
 *@ptr: a pointer to a variable of the type char
 *
 *Return: dest data
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i]; i++)
{
if (s[i] > 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
s[i]++;
}
}
return (0);
}
