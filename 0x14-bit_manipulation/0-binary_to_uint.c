#include "main.h"
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: String to convert.
 * Return: the convertion of the string.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 1, num = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '1' && b[i] != '0')
			return (0);
	i--;
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			num = num + c;
		c = c * 2;
	}
	return (num);
}
