#include "main.h"
/**
 * _atoi - convert a string to an integer.
 *
 * @s: string
 *
 * Return: no numbers in the string, the function must return 0
 *
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, x;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
		{
			pn *= -1;
		}
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}
	for (x = count - size; x < count; x++)
	{
		oi = oi + ((*(s + x) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
