#include "holberton.h"
#include <string.h>
/**
 * rev_string - used to print a string in reverse order
 * @s: a pointer holding a character datatype
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int l, c;
char *b_ptr, *e_ptr, ch;
l = strlen(s);

for (c = 0; c < l - 1; c++)
{
e_ptr++;
}

for (c = 0; c < 1 / 2; c++)
{
ch = *b_ptr;
*b_ptr = *e_ptr;
*e_ptr = ch;

b_ptr++;
e_ptr++;
}
}
