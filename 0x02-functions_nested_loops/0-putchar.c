#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to start
 * @c: The character to print
 *
 * Return: 0
 * On error, -1 is returned, and  is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
