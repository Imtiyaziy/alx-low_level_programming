#include "main.h"

/**
 *_abs - display point
 *@n : The charact to print
 *
 *Return: 0 for success
 */
int _abs(int n)
{
	if (n < 0)
	{
		int bell = -n;

		return (bell);
	}
	else
	{
	return (n);
	}
}
