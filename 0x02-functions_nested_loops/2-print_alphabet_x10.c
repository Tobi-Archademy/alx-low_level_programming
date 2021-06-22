#include <stdio.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
int main(void)
{
int i = 0, ch;
while (i < 10)
{
for (ch = 97; ch <= 122; ch++)
putchar(ch);
putchar('\n');
i++;
}
return (0);
}
