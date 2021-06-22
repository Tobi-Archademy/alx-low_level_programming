#include "holberton.h"
/**
* print_alphabet - a function that prints the alphabet, in lowercase
*
*
* Return: Always 0.
*/
void print_alphabet(void)
{
int a;
for (a = 97; a <= 122; a++)
_putchar(a);
_putchar('\n');
}
