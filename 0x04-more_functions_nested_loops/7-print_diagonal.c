#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * Return: 0
 */
void print_diagonal(int n)
{
	int count = 0, space;

	if (n > 0)
	{
		while (count < n)
		{
			for (space = 0; space < count; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
		_putchar('\n');
}
