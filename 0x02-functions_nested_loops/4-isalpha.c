#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c : is a single alphabet that is inserted to check the function
 * desc: Returns 1 if c is lowercase, else 0
 * Return: 1 (Success) else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
