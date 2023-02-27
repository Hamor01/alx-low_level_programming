#include "main.h"

/**
* print_rev - function that prints a string, in reverse, followed by a new line
*
* @s: string to be reversed
*
* Return: Always 0
*/

void print_rev(char *s)
{
	int longi = 0;

	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
