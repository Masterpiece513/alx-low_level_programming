#include <stdio.h>
/**
 * main - print the sum of even Fibonacci numbers
 * up to 4000000
 * Return: 0
 */
int main(void)
{
	long int i = 1, j = 2, k = 0, sum = 0;
	
	while (j <= 4000000)
	{
		if ((j % 2) == 0)
			sum += j;
		k = i + j;
		i = j;
		j = k;
	}
	printf("%ld\n", sum);
	return (0);
}
