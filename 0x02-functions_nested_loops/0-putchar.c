#include "main.h"
/**
 * main - main function block
 * Return: 0
 */

int main(void)
{
char text[] = "_putchar";
for (int count = 0; count < MAXSTRING; count++)
{
if (text[count] == '\0')
{
_putchar('\n');
break;
}
else _putchar(text[count]);
}
return(0);
}
