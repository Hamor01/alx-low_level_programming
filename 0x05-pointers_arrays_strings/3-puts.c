#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to print
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str++);
	}
	putchar('\n');
}
