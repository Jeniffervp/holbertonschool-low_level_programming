#include "holberton.h"
int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

int print_string(va_list list)
{
	char *str, *n;
	int l, cont;

	str = va_arg(list, char*);
	n = "(null)";

	if(!str)
	{
		for(cont = 0; n[cont]; cont++)
			_putchar(n[cont]);
		return (cont);
	}
	else
	{
		for(l = 0; str[l]; l++)
			_putchar(str[l]);
	}
	return (l);
}
int print_percent(va_list list)
{
	(void)list;

	return (_putchar('%'));
}
int print_int(va_list list)
{
        char p[10];
        int i;
        int num = va_arg(list, int);
        int chars = 0;

        if(num < 0)
        {
		_putchar('-');
                num *= -1;
                chars++;
        }
        if(num >= 0 && num <= 9)
        {
                _putchar(num + '0');
                chars++;
        }
        if (num >= 10)
        {
                for (i = 0; (num / 10) != 0; i++)
                {
                        p[i] = (num % 10) + '0';
                        num /= 10;
                }
                p[i] = num + '0';
                chars += i + 1;
                for ( ; i >= 0; i--)
                {
                        _putchar(p[i]);
                }
        }
        return(chars);
}
