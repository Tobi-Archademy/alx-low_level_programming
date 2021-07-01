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
char str[], *ptr;
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
i++;
}
}
