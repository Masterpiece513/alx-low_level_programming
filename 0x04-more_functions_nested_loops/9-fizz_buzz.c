#include <stdio.h>
/**
 * main - print numbers 1 to 100
 * info: if number is multiple of 3, 5 or both print fizz, buzz or fizzbuzz resp.
 * Return: 0
 */
int main(void)
{
	int n, i;

	for (n = 1; n <= 100; n++)
	{
		for (i = 1; i <= 99; i++)
		{
			if (i % 15 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%i ", i);
			}
		}
		if (n == 100)
		{
			printf("Buzz");
		}
	}
	printf("\n");
	return (0);
}
