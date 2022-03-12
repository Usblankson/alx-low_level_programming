#include <stdio.h>
/**
 * main - Entry Point
 * Desc - program Print all numbers of base 10, starting from 0.
 * You are not allowed to use any variable of type char.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` twice.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for  (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
