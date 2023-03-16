#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiplies two positive numbers
 * @num1: The first number to be multiplied
 * @num2: The second number to be multiplied
 *
 * Return: The product of num1 and num2
 *
 * Author: Silas Mugambi
 */
int mul(char *num1, char *num2)
{
  int len1 = 0, len2 = 0, i, j, k = 0, carry = 0, n1, n2, sum;
  int *result;

  while (num1[len1])
    len1++;
  while (num2[len2])
    len2++;

  result = calloc(len1 + len2, sizeof(int));

  for (i = len1 - 1; i >= 0; i--)
  {
      carry = 0;
      n1 = num1[i] - '0';

      for (j = len2 - 1; j >= 0; j--)
      {
        n2 = num2[j] - '0';
        sum = n1 * n2 + result[k] + carry;
        carry = sum / 10;
        result[k] = sum % 10;
        k++;
      }
      if (carry > 0)
      {
        result[k] += carry;
        carry = 0;
      }
      k = len1 - 1 - i + 1;
  }

  for (i = k - 1; i >= 0; i--)
  printf("%d", result[i]);
  printf("\n");
  free(result);
  return 0;
}

/**
 * checks if a string is a positive number
 * @str: The string to be checked
 *
 * Return: 1 if str is a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
  int i;

  for (i = 0; str[i]; i++)
  {
    if (!isdigit(str[i]))
    return 0;
  }

  return 1;
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 if successful, 98 otherwise
 */
int main(int argc, char **argv)
{
  if (argc != 3)
  {
    printf("Error\n");
    return 98;
  }

  if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
  {
    printf("Error\n");
    return 98;
  }

  mul(argv[1], argv[2]);

  return 0;
}
