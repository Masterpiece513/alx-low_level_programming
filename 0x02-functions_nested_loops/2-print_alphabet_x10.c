#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 * Description: print alphabets 10 times
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
