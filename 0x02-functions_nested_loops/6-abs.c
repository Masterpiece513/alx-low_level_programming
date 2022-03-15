#include "main.h"
/**
 *_abs - compute the absolute value of an integer
 *@n: int input
 * Description: return the absolute value of a number
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
