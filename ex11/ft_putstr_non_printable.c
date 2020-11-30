/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:26:30 by jceia             #+#    #+#             */
/*   Updated: 2020/11/30 20:25:52 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_char_is_printable(char c)
{
	return (c >= 32 && c <= 126);
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
	while (*str)
	{
		if (ft_char_is_printable(*str))
			ft_putchar(*str);
		else
			ft_putchar_hex(*str);
		str++;
	}
}
