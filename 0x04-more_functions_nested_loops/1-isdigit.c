#include "main.h"

/**
 * _isdigit - check if c is digit
 * @c: the number to be checked
 * return: 1 fot a character that will be a digit 0 for any else
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
