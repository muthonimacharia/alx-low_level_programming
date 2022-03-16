#include "main.h"

/**
* _abs - convert number to absolute
*@c: The int to convert to absolute
*Return: absolute value
*/

int _abs(int c)
{
if (c < 0)
{
int absval = c + (c * -2);
return (absval);
}

else
return (c);

}
