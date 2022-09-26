#include "main.h"
/**
 *_memcpy - copy bytes from one address to another address "to"
 *@dest: content to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
