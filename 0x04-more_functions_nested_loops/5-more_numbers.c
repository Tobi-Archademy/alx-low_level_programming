#include "holberton.h"
/**
 * more_numbers - a function used to print numbers on 10 lines.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i = 0, a;
while (i < 10)
{
for (a = 0; a <= 14; a++)
_putchar(a);
_putchar('\n');
i++;
}
