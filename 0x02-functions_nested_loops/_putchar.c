<<<<<<< HEAD

=======
#include "main.h"
#include "unistd.h>
/**
*_putchar - writesthe character c to stdout
*@c: The character to print
*
*Return: On success 1
*on error, -1 is returned, and erno is set appropriately
*/
int _putchar(char c)
{
  return (write(1, &c, 1));
}
>>>>>>> 48be59e0d0806424ee38672559a4aa30c7216528
