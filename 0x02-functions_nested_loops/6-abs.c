#include "main.h"
/**
 * main - entry point
 * Description: return the absolute value of a number
 * Return: 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
