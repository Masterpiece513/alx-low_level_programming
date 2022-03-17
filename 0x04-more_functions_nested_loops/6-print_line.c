#include "main.h"
/**
 * print_line - draw a straight line in terminal
 * @n: number of time _ should be printed
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(95);
	}
	_putchar(10);
}
