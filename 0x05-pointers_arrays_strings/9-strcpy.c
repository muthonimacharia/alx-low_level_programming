#include "main.h"

/**
 * *_strcpy - copies string to another string
 * @dest: string pointer
 * @src: src pointer
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
