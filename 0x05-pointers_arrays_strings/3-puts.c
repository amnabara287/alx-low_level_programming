#include "main.h"
/**
 * _puts - return the length of a string
 * Owned By Bwave
 * @str: char to check
 * Description: this will print a string
 * Return: 0 is success
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
