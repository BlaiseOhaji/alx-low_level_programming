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
int c;
int d;

while (a < 10)
{
b = 0;
while (b < 10)
{
c = 0;
while (c < 10)
{
d = 0;
while (d < 10)
{
if (!(b > c))
{
putchar(48 + a);
putchar(48 + b);
putchar(' ');
putchar(48 + c);
putchar(48 + d);

if (a + b + c + d != 35)
{
putchar(',');
putchar(' ');
}
}
d++;
}
c++;
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
