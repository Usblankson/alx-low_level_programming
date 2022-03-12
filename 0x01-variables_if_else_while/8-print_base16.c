#include <stdio.h>
/**
 * main - Entry Point
 * Desc - program prints all numbers of base64 in lowercase.
 * * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
