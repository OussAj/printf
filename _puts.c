#include "main.h"
#include <unistd.h>

/**
 * _puts - a function that prints a string.
 * @str: the string to be printed.
 * 
 * Return: 0
*/

int _puts(char *str)
{
	while (str[len] != '\0')
	{
		len++;
	}

	write(1, str, len);
}
