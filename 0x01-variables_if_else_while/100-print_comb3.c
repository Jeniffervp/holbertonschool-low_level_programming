#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int fnum, snum;

	for  (fnum = 48; fnum <= 56; fnum++)
	{
		for (snum = fnum + 1; snum <= 57; snum++)
		{
			putchar(fnum);
			putchar(snum);
			if (!(fnum == 56 && snum == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
