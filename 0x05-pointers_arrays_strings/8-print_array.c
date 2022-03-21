#include "main.h"
#include <stdio.h>
/**
 * print_array - print n of int array
 * @a: pointer
 * @n: number of values to print
 */
void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}

		printf("\n");
}
