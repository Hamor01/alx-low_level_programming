#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * Author: Hamor
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i,j;

	char s1[] = "aAeEoOtTlT";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		if (j = 0; j < 10; j++)
		{
			for (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
