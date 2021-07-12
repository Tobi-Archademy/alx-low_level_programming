#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the main entry point to a program
 *
 * @argc: is the argument count
 * @argv: is argument vector
 *
 * Return: 0 - Success
 **/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)

{
printf("%s\n", argv[i]);
}
return (0);
}
