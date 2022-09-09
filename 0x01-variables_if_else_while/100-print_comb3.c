#include <stdio.h>
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
putchar(a);
putchar(b);

if (a + b != 17)
{
putchar(a);
putchar(b);
}
 
}
b++;

}
a++;
}
putchar('\n');
return (0);
}
