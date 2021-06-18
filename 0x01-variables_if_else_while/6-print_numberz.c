#include <stdio.h>
/**
 * main - entry point fucntion
 *
 * Description: prints all lowercase characters, followed by a new line
 *
 * Return: always 0 (success)
 */
int main(void)
{
int o;
for (o = 48; o < 58; o++)
putchar(o);
putchar('\n');
return (0);
}
