#include "main.h"
/**
 * _puts - puts to stdout
 * @str: parameter
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}

	_putchar('\n');
}
