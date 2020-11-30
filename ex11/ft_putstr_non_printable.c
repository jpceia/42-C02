#include <unistd.h>
#include <stdio.h>



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_hex(char c)
{
	char c1;
	char c2;

	c1 = c / 16;
	c2 = c % 16;
	c1 = c1 < 10 ? c1 + 48 : c1 + 87;
	c2 = c2 < 10 ? c2 + 48 : c2 + 87;

	write(1, "\\", 1);
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_str_non_printable(char *str)
{
	while(*str != 0)
	{
		if(*str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar_hex(*str);
		}
		str++;
	}
}
int	main()
{
	char *s = "Coucou\n tu vas bien?";
	puts(s);
	ft_str_non_printable(s);
}
