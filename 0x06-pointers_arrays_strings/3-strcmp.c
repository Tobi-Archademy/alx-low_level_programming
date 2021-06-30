#include <stdio.h>
#include "string.h"
#include "holberton.h"
/**
 *_strcmp - a function that compares to strings
 *@s1: pointer to datatype char
 *@s2: pointer to datatype char
 *
 *Return: result of pointer
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}

if (*s1 == *s2)
{
return (0);
}

else
{
return (*s1 - *s2);
}
}
