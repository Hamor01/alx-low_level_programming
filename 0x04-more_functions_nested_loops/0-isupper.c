#include "main.h"

/**
* _isupper - function that prints uppercase
*
* Author: haron hama
* @c: parameter to be printed
* Return: 1 if it is uppercase
* and 0 if otherwise
*/

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
