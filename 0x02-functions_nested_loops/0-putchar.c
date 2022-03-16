#include <stdio.h>
#include "main.h"
/**
 * main - Entry main
 * desc - Program prints _putchar, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char *s = "_putchar";

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	return (0);
}
