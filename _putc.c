#include "main.h"
/**
 * _putc - a function that prints a character.
 * @c: the character to printed.
 * 
 * Return: return 0
*/
int _putc(char c)
{
    write(1, c ,1);
    return (0);
}