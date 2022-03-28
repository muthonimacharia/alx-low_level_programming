#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: source string
 * @c: character to search for
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
