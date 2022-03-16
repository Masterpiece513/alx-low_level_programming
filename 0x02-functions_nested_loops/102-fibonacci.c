#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k = 0;

	printf("%ld, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%ld\n", j);
		}
		else
		{
			printf("%ld, ", j);
		}
		k = i + j;
		i = j;
		j = k;
		count++;
	}
	return (0);
}
