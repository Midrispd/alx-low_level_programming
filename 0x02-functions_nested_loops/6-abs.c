#include "main.h"
/**
 * _abs - prints the absolute value of a number
 * @c: is the number to be checked
 * Return: c (success)
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
