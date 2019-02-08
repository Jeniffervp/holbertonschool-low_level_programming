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
	int fnum, snum, tnum;

	for  (fnum = 48; fnum <= 55; fnum++)
	{
		for (snum = fnum + 1; snum <= 56; snum++)
		{
			for (tnum = snum + 1; tnum <= 57; tnum++)
			{
				putchar(fnum);
				putchar(snum);
				putchar(tnum);
				if (!(fnum == 55 && snum == 56 && tnum == 57))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
