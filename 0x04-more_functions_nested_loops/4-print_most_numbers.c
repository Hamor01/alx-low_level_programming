#include "main.h"

/**
* print_most_numbers - prints all numbers between 0 t0 9 excluding 2 and 4
*
* Return: always 0
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar (i);
		}
	}
	_putchar ('\n');
}
