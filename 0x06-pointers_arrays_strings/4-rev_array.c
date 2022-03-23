#include "main.h"

/**
 * reverse_array - reverse contents of array
 * @a : arrays of integers
 * @n : size of array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
