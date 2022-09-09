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

while (a < 10)
{
b = 0;
while (b < 10)
{
c = 0;
while (c < 10)
{
if (c != b && b != a && a < b && b < c)
{
putchar(48 + a);
putchar(48 + b);
putchar(48 + b);

if (a + b + c != 24)
{
putchar(',');
putchar(' ');
}

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
