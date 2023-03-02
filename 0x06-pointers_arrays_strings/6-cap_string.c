#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * Author: Hamor
 * @strc: The string to be capitalized
 *
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;
	while (strc[index])
	{
		while (!(strc[index] >= 'a' && strc[index] <= 'z'))
			index ++;
		if (str[index-1] == ' ' ||
				str[index-1] == '\t' ||
				str[index-1] == '\n' ||
				str[index-1] == ',' ||
				str[index-1] == ';' ||
				str[index-1] == '.' ||
				str[index-1] == '!' ||
				str[index-1] == '?' ||
				str[index-1] == '"' ||
				str[index-1] == '(' ||
				str[index-1] == ')' ||
				str[index-1] == '{' ||
				str[index-1] == '}' ||	index == 0)
			str[index -= 32;
		index ++;
	}
	return (str);
}
