#include <stdio.h>
#include <unistd.h>
/**
 *main - main function
 *Return: 1
 */
int main(void)
{
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(1, text, sizeof(text));
return (1);
}
