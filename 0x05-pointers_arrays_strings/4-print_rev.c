#include "holberton.h"
/**
 * print_rev - used to print a string in reverse order
 * @s: a pointer holding a character datatype
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int l, c;

l = 0;

while (*(s + l) != '\0')
{
l++;
}

c = l;
l = 0

while (*(s + counter) != '\0')
{
_putchar(*(s + (c - (l++ + 1))));
}
_putchar('\n');
}
