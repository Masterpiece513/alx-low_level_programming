#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			i = 'a';
			for (; i < 'g'; i++)
			{
				putchar(i);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
