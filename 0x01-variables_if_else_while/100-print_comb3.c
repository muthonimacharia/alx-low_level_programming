#include <stdio.h>

/** 
*main - prints all possible different combinations of two digits
*Retuen: Always 0 (Success)
*/
int main(void)
{
	int n, m;

	for (n = 48; <= 56; m++)
		{
			if (m > n)


			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
