#include "holberton.h"
/**
 * print_alphabet_x10 - it is a function used to print alphabet on 10 lines.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0, a;
while (i < 10)
{
for (a = 97; a <= 122; a++)
_putchar(a);
_putchar('\n');
i++;
}
}
