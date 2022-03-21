#include "main.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = -1;
	int var = 0;

	while (s[i] != '\0')
	{

		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			var = 1;
		}
		else if (var == 1)
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
