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
	while (i <= 98)
	{
		if (i == 98)
		{
			printf("%d\n", num2);
		}
		else
		{
			printf("%d, ", num2);
		}
		next_num = num2;
		num2 += num1;
		num1 = next_num;
		i++;
	}
	return (0);
}
