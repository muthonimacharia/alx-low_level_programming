#include "main.h"

/**
 * *_strcat - function appends srtings
 * @dest: parameter pointer to a character
 * @src: parameter pointer to a character
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
