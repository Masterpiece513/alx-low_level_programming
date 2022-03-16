#include <stdio.h>
/**
 * main - print fibonacci numbers up to 98
 * Return: 0
 */
int main(void)
{
	int num1 = 1, num2 = 2, i = 2;
	int next_num;

	printf("%d, ", num1);
	for (i <= 98; i++)
	{
		if (i == 98)
		{
			printf("%d, ", num2);
		}
		else
		{
			printf("%d, ", num2);
		}
		next_num = num2;
		num2 += num1;
		num1 = next_num;
	}
	return (0);
}

