#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: String 1.
 * @s2: String 2.
 * @n: Bytes from s2.
 *
 * Return: Pointer to the array or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, k = 0, l = 0, m = 0, q = 0;
char *ptr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = NULL;
}
while (*(s1 + i))
{
i++;
}
while (*(s2 + j))
{
j++;
}
j++;

ptr = malloc(sizeof(char) * (i + j));
if (ptr == NULL)
{
return (NULL);
}

for (k = 0; k <= i; k++)
{
*(ptr + k) = *(s1 + l);
l++;
}
for (q = 0; q < n; q++)
{
*(ptr + q + i) = *(s2 + m);
m++;
}
*(ptr + q + i) = '\0';
return (ptr);
}
