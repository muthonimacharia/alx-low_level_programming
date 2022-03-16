#include "main.h"

/**
* times_table - 9*9 grit output
*/

void times_table(void)
{
int r1, r2, m;

for (r1 = 0; r1 < 10; r1++)
{
for (r2 = 0; r2 < 10; r2++)
{
m = r2 * r1;
if (r2 == 0)
{
_putchar(m + '0');
}

if (m < 10 && r2 != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(m + '0');
}
else if (m >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
}
}
_putchar('\n');
}
}
