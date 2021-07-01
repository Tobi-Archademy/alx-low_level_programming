#include <stdio.h>
#include "string.h"
#include "holberton.h"
/**
 *_strncpy - a function that copies a limited portion of src to dest
 *@dest: pointer char void
 *@src: pointer char source
 *@n: reduces the size of dest
 *Return: dest data
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
if (dest == NULL)
{
return (NULL);
}

while (*src && n--)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (ptr);
}
