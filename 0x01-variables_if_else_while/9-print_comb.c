#include <stdio.h>
/**
 * main - main function block
 * Return: 0
 */

int main(void)
{
int i = 0;

while (i < 10)
{
putchar(48 + i);
if (c != 9)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar(48 + i);
putchar('\n');
return (0);
}
