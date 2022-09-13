#include "main.h"
/**
 * _abs - main function
 *Return: Always 0
 */
int _abs(int n)
{
  if (n < 0)
  {
    _putchar(n * (-1));
  }
  else
  {
    _putchar(n);
  }
  return (0);
}
