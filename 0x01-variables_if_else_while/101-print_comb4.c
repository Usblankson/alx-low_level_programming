#include <stdio.h>
/**
 * main - Entry Point
 * Desc - program prints all possible different combinations of three digits.
 * Return: Always return 0
 */
int main(void)
{
	int count, a, b, c;

	for (count = 0; count < 1000; count++)
	{
		a = count / 100; /*  hundreds */
		b = (count / 10) % 10; /* tens */
		c = count % 10; /* unit */

		if (a < b && b < c)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(c + '0');

			if (count < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
