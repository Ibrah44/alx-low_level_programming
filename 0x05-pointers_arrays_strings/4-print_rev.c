#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 * Return: always 0.
 */
void print_rev(char *s)
{
	int i = 0;

while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);

	_putchar('\n');
}

