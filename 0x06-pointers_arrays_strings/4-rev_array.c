#include <stdio.h>
#include "holberton.h"
/**
 *reverse_array - a function that prints an array of integers in rev
 *@a: pointer to datatype of an integer
 *@n: a variable of an integer datatype
 *
 *Return: result of pointer
 */
void reverse_array(int *a, int n)
{
int arr[n];
for (a = arr; a <= a + n - 1)
{
a++;
}
for (a = a + n - 1; a >= arr)
{
a--;
}
}
