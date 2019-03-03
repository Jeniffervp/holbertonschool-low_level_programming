#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - entry point
  *@argc: Argument
  *@argv: Pointer to the string
  * Return: always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, a, b;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (isdigit(argv[a][b]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
