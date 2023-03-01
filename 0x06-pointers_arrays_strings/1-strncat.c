#include "main.h"

/**
 * _strncpy - copies at most an inputted number
 * of the bytes from string src into dest
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the maximum number of the bytes to copied from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
