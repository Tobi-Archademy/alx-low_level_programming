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
int ch;
for (ch = 97; ch <= 122; ch++)
putchar(ch);
putchar('\n');
return (0);
}
