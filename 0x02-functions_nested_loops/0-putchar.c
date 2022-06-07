#include "main.h"

/* main - prints _putchar
 *
 *Return: Always 0 (Success)
 */

int main(void)

{
	char c[8] = "_putchar";
	int alpha = 0;
	while (alpha < 7)
	{
		_putchar(c[alpha]);
		alpha++;
	}
	_putchar('\n');
	return(0);
}
