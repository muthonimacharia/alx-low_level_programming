#include "main.h"

/**
* print_sign -check if number positive negative or neutral
*@n: The character to print
* Return: 1 for true 0 for false
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
