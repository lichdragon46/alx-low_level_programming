#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char L;

	for (L = 97; L <= 122; L++)
		if (L != 101 && L != 113)
			putchar(L);
	putchar(10);
	return (0);
}
