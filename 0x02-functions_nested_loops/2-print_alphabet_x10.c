#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int letter;
	int counter = 0;

	while (counter < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		counter++;
		_putchar('\n');
	}
}