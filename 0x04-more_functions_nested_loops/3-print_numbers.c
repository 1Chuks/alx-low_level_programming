#include "main.h"
/**
 * print_numbers - function
 *
 * Description: Prints numbers 0-9 followed by a newline
 * Return: none
 */
void print_numbers(void)
{
	int num;
	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
