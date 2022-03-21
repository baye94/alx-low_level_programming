#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int len = 0, _sign, num;

	while (s[len] != 0)
		len++;

	_sign = 1;
	while ((*s) == '-')
	{
		if (*s == '-')
			_sign = _sign * -1;
		s++;
	}

	num = 0;
	while ((*s >= '0') && (*s <= '9'))
	{
		num = (num * 10) + ((*s) - '0');
		s++;
	}

	return (_sign * num);
}
