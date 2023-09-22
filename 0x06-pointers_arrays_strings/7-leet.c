#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @t: string
 * Return:Always 0 (Success)
 *
*/

char *leet(char *t)
{
	char *cp = t;
	char key = {'A', 'E', 'O', 'T', 'L'};
	int Value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*t)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*t == key[i] || *t == key[i] + 32)
			{
				*t = 48 + Value[i];
			}
		}
		t++;
	}

	return (cp);
}
