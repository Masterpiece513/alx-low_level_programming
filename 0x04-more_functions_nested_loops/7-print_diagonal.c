#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: input value
 * Return: 0
 */
void print_diagonal(int n)
{
	int count, space;

	if (n > 0)
	{
		while (count < n)
		{
			for (space = 0; space < count; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (count == (n-1))
				continue;
			_putchar('\n');
			count++
		}
	}
	else
		_putchar('\n');
}
