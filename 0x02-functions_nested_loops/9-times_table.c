#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: 0
 */
void times_table(void)
{
	int num, mul, result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
	}
	for (mul = 1; mul <= 9; mul++)
	{
		_putchar(44);
		_putchar(32);
		result = num * mul;
	}
	if (result <= 9)
		_putchar(32);
