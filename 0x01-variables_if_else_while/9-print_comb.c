#include <stdio.h>
/**
 * main - Entry Point
 * Desc - program that prints all possible combinations of single-digit numbers.
 * * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44); // , character
			putchar(32); // space character
		}
		i++;
	}
	putchar('\n');

	return (0);
}
