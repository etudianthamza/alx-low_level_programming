#include "main.h"

/**
<<<<<<< HEAD
 * main - prints the numbers from 1 to 100.
=======
 * main - Entry point
>>>>>>> 3329c1e18079731c588660edb623d6c378cc5af3
 *
 * Return: always 0 (Success)
 *
*/
<<<<<<< HEAD
=======

>>>>>>> 3329c1e18079731c588660edb623d6c378cc5af3
int main(void)
{
	int i;

	for (i = 1 ; i < 101 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			_putchar('0' + i);
			_putchar(' ');
		}
<<<<<<< HEAD
		_putchar('\n');
		return (0);
=======
>>>>>>> 3329c1e18079731c588660edb623d6c378cc5af3
	}
	_putchar('\n');
	return (0);
}
