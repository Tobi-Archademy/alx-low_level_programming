#include <stdio.h>
#include "holberton.h"
/**
 *string_toupper - a function that changes a string to uppercase
 *
 *@ptr: a pointer to a variable of the type char
 *
 *Return: dest data
 */
char *string_toupper(char *ptr)
{
char str[0], *ptr;

while (str[0] != '\0')
{
if (str[0] >= 97 && str[0] <= 122)
{
str[0] = str[0] - 32;
}
str[]++;
}
*ptr = str[];
}
