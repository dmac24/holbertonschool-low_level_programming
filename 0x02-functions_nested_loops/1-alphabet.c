#include "holberton.h"

/**
 * print alphabet - print alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
int c = 'a';
while (c <= 'z')
{
_putchar(c++);
}
_putchar('\n');
}
