#include "holberton.h"

/**
 * print alphabet - print alphabet x10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int n = '0';
int c = 'a';
while (n < 10)
{
while (c <= 'z')
{
_putchar(c++);
}
n++;
_putchar('\n');
}
}