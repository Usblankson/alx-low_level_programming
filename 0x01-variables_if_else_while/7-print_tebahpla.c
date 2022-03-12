#include <stdio.h>
/**
 * main - Entry Point
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
