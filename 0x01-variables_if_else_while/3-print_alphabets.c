#include <stdio.h>
/**
 * main - A program that prints alphabet in upper and
 * lower case using putchar function
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	return (0);
}
