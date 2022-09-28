#include "main.h"
/**
 *factorial - gets the factorial of any given number
 *@n: input number
 *Return: factorial as an int
 */
int factorial(int n)
{
if (n == 0)
return (1);

else if (n < 0)
return (-1);

else return (n * factorial(int n - 1));

}
