#include "main.h"

/**
 * print_chessboard -  prints the chessboard
 * @a : the area
 *
 * Return: Always 0 (Success)
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8 ; i++)
	{
		for (i = 0; j < 0 ; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
