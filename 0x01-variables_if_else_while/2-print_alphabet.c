#include <stdio.h>
/**
 * main - Entry point
 * desc: Program uses `putchar` func to print tha alphabet in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
