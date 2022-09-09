#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function block
 * Return: 0
 */
int main(void)
{
int n;
int enddigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (enddigit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, enddigit);
} else if (enddigit < 6 && enddigit != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, enddigit);
} else if (enddigit == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, enddigit);
}
return (0);
}
