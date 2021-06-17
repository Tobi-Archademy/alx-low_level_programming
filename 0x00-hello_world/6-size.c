#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int lintType;
long long int LinType;
float floatType;

printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(lintType));
printf("Size of long long int: %zu bytes\n", sizeof(LinType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);

}
