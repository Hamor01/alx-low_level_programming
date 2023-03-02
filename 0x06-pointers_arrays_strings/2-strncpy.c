#include "main.h"

/**
 * _strncp - copy a string
 * Authour: Hamor
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * return: dest
 */

char *_strncp(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
