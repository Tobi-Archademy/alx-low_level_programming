#include <stdio.h>
#include "string.h"
#include "holberton.h"
/**
 *_strncat - a function that appends a limited portion of src to dest
 *@dest: pointer char void
 *@src: pointer char source
 *@n: reduces the size of dest
 *Return: dest data
 */
char *_strncat(char *dest, char *src, int n)
{
while (*dest != '\0')
{
*dest++;
}
n = sizeof(*dest) - _strlen(*dest) - 1;
*dest = n;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
}
