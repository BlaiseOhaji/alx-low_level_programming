#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function block
 * Return: 0
 */

int main(void)
{
int a = 0;
int b;

while (a < 10)
{
b = 0;
while (b < 10)
{
if (a != b && a < b)
{
putchar(48 + a);
putchar(48 + b);

if (a + b != 17)
{
putchar(',');
putchar(' ');
}

}
b++;

}
a++;
}
putchar('\n');
return (0);
}
