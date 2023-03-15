#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 *
 * Return: On success 1
 * On erro: -1 is returned and error is set approprietly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
