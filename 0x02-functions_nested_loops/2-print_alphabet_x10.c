#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry Point
 * desc: func prints the alphabet 10 times, in lowercase followed by a new line
 * Return: a - z 10x
 */
void print_alphabet_x10(void)
{
	int i, n;

	i = 0;

	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		i++;
		_putchar('\n');
	}
}
