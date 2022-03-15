#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * n could be greater than or less than 98
 * @n: user input
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = 0; n <= 97; n++)
			printf("%d", n);
	}
	else
	{
		for (n = 0; n > 98; n--)
			printf("%d", n);
	}
	printf("98\n");
}