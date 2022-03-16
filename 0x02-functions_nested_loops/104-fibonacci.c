#include <stdio.h>
/**
 * main - print fibonacci numbers up to 98
 * Return: 0
 */
int main(void)
{
	int  i;
	long int num1 = 0, num2 = 1;
	long int next_num;

	for (i = 0; i <= 98; i++)
	{
		next_num = num1 + num2;
		printf("%ld", next_num);
		num1 = num2;
		num2 = next_num;
		if (i == 97)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
