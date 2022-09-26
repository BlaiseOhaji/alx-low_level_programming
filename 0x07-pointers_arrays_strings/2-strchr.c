#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search for
 * Return: Pointer to the first occurrence of the character c in the string s
 **/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	return (0);
}
