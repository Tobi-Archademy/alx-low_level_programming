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
int i, j = 0;

while (src[j] != '\0' && n--)
{
j++;
}

for (i = 0; i <= j; i++)
{
dest[i] = src[j];
}

return (dest);
}
