#include "main.h"
/**
 *_memset - main function
 *@s: pointer of memory to fill
 *@b: value to be set
 *@n: no bytes of the memory
 *Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
