#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * On eroor: -1 is returned, and error is set approprietly
 */
int _putchar(char c)
{
	return (wrie(1, &c, 1));
}
