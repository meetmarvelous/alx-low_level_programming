#include "main.h"

/**
 * main - Prints _putchar
 * Return: Zero
 */
int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	for (; i < 8; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');

	return (0);
}
