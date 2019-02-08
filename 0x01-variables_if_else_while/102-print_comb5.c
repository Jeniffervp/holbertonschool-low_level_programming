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

	for  (fnum = 0; fnum <= 98; fnum++)
	{
		for (snum = fnum + 1; snum <= 99; snum++)
		{
			putchar(fnum / 10 + '0');
			putchar(fnum % 10 + '0');
			putchar(' ');
			putchar(snum / 10 + '0');
			putchar(snum % 10 + '0');
			if (!(fnum == 98 && snum == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
