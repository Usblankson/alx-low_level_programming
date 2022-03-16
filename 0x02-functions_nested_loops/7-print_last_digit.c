#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @ld: this variable recives an integer
 * desc: Returns the value of the last digit
 * Return: pld (Success)
 */
int print_last_digit(int ld)
{
	int lit;

	lit = (ld % 10);

	if (lit < 0)
	{
		lit = (-1 * lit);
	}

	_putchar(lit + '0');

	return (lit);
}
