#include <stdio.h>
/**
 * main - print numbers 1 to 100
 * info: if number is multiple of 3, 5 or both print fizz, buzz or fizzbuzz resp.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
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
				for (i == 100)
					printf("Buzz");
				for (i != 100)
					printf("Buzz ");
			}
			else
			{
				printf("%i ", i);
			}
		}	
	}
	printf("\n");
	return (0);
}
