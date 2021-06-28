#include "holberton.h"
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

b_ptr = s;
e_ptr = s;

for (c = 0; c < l - 1; c++)
{
e_ptr++;
}

for (c = 0; c < 1 / 2; c++)
{
ch = *e_ptr;
*e_ptr = *b_ptr;
*b_ptr = ch;

b_ptr++;
e_ptr++;
}
}
