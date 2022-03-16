#include "main.h"

/**
* _isalpha -check if number in alphabet
*@c: The character to print
* Return: 1 for true 0 for false
*/

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 72 && c <= 122))
return (1);

else
return (0);

}
