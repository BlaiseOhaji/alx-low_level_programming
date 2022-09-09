#include <stdio.h>
/**
 * main - main function block
 * Return: 0
 */

int main(void)
{
int i = 0;

while (i < 9)
{
putchar(48 + i);
putchar(", ");
i++;
}
putchar(48 + i);
putchar('\n');
return (0);
}
