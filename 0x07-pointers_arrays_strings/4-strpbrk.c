#include "holberton.h"

/**
 * _strpbrk -searches string for any of a set of bytes.
 * @s: char pointer
 * @accept: char pointer
 * Return: pointer to the byte in s that matches one of t *he bytes in accept.
 * or null.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, a;

	for (i = 0; *(s + i) != '\0'; i++)

		for (a = 0; *(accept + a) != '\0'; a++)

			if (*(s + i) == *(accept + a))
			{
				*s = *(s + i);
				break;
			}

	return (s);
}
