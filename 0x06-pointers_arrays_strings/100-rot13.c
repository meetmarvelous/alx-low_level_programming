#include "main.h"

/**
 * rot13 - Encoding letters
 * @s: string
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char alp[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == alp[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
