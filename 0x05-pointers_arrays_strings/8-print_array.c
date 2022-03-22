#include "main.h"
/**
 * print_array - print n elements of an array
 * @a: pointer to array
 * @n: number of elements in array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (l != n - 1)
			printf("%d, ", a[l]);
		else
			printf("%d", a[l]);
	}
	printf("\n");
}
