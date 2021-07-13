#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Copies a string and returns a pointer to the array.
 * @str: String to be copied.
 *
 * Return: Pointer to the array or NULL.
 */
char *_strdup(char *str)
{
int i = 0;
int l = 0;
char *p;

if (str == NULL)
{
return (NULL);
}
while (*(str + i))
{
i++;
}
i++;
p = malloc(sizeof(char) * i);

if (p == NULL)
{
return (NULL);
}
for (; l < i; l++)
{
*(p + l) = *(str + l);
}
return (p);
free(p);
}
