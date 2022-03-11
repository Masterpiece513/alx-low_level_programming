#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char al_lower;
	char al_upper;

	for (al_lower = 'a'; al_lower <= 'z'; al_lower++)
	{
		putchar(al_lower);
	}
	for (al_upper = 'A'; al_upper <= 'Z'; al_upper++)
	{
		putchar(al_upper);
	}
	putchar('\n');
	return (0);
}
