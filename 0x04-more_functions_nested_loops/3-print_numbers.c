#include "main.h"
/**
 * print_numbers - function
 *
 * Description: Prints numbers 0-9 followed by a newline
 * Return: none
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{

		_putchar(c);
	
	}
	_putchar('\n');
}
