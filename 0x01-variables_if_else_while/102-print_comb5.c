#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i; /*Decarling statement*/
int j;
/*for 0-9 with ASCII*/
for (i = 0; i < 100 ; i++)
{
for (j = i + 1 ; j < 100; j++)
{
putchar (i / 10 + '0'); /*print  first nums, first digit*/
putchar (i % 10 + '0'); /*print  first nums, second digit*/
putchar (' '); /*print a space*/
putchar (j / 10 + '0'); /*print  sencond nums, first digit*/
putchar (j % 10 + '0'); /*print  second nums, second digit*/
/*break program if the condition is true (if is 98 99)*/
if (i == 98 && j == 99)
{
break;
}
putchar(','); /*print (,)*/
putchar (' '); /*print a space*/
} /*end for #2*/
} /*end for #1*/
putchar('\n'); /*new line*/
return (0);
}
