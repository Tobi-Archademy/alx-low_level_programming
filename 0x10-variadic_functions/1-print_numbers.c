#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers with a separator.
 * @separator: Separator
 * @n: Quantity of numbers
 *
 * Return: Result of adding the numbers or 0 if not arguments were passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list ap;
va_start(ap, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (separator != NULL && i < (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);

}
