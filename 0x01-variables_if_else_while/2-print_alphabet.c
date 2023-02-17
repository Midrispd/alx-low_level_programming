#include <stdio.h>
/**
 * main - A program that prints alphabets in lower case uing a putchar
 * function
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
}
putchar("\n");
return (0);
}
