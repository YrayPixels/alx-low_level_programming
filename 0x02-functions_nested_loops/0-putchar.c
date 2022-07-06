#include "main.h"
/**
 * main - Entry block
 * Description: prints putchar on new line
 * Return: 0
 */
int main(void)
{
	char c[10] = "_putchar";

	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
