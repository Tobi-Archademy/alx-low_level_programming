#include "holberton.h"
/**
 * print_rev - used to print a string in reverse order
 * @s: a pointer holding a character datatype
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int i, c = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
c++;
}
for (i = c - 1; i >= 0; i--)
}
