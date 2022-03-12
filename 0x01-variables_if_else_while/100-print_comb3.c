#include <stdio.h>
/**
 * main - entry point
 * Description: print only the smallest possible combinations of two digit numbers
 * numbers must be seperated by a comma and a space
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b, c;

	while (a < 100)
	{
		b = a % 10;
		c = a / 10;
		
		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		a++
	}
	putchar('\n');

	return (0);
}
