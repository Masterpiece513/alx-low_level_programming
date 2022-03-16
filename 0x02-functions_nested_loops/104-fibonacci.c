#include <stdio.h>
/**
 * main - print fibonacci numbers up to 98
 * Return: 0
 */
int main(void)
{
	int  i = 0;
	long int num1 = 1, num2 = 2;
	long int next_num = 0;

	printf("%ld, ", num1);
	while (i <= 98)
	{
		if (i == 98)
		{
			printf("%ld\n", next_num);
		}
		else
		{
			printf("%ld, ", next_num);
		}
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
		i++;
	}
	return (0);
}
