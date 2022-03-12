#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int count, a, b;

	count = 0;

	while (count < 100)
	{
		a = count % 10; /* single digits */
		b = count / 10; /* double digits */

		if (b < a)
		{
			putchar(b + '0');
			putchar(a + '0');

			if (count < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		count++;
	}
	putchar('\n');

	return (0);
}
