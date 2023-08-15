#include "main.h"
/**
 * _islower - check if char is lowercase
 * @c: the char to be checked
 * Return: 1 if char is lowercase
 * Return: 0 Otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

