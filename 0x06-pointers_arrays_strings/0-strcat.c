#include <stdio.h>
#include "string.h"
#include "holberton.h"
/**
 *_strcat - Write a function that appends strin src to dest, pointing to dest
 *@dest: pointer char void
 *@src: pointer char source
 *Return: dest data
 */
char *_strcat(char *dest, char *src)
{
while(*dest != '\0') /* find the end of the string */
{
dest++;
}
while((*dest++ = *source++) != '\0'); /* copy source */
{
*dest++;
}
return(dest);
}
