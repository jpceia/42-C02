/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:29:21 by jceia             #+#    #+#             */
/*   Updated: 2020/11/30 20:33:28 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_hex(unsigned char c)
{
	char	c1;
	char	c2;

	c1 = c / 16;
	c2 = c % 16;
	c1 = c1 < 10 ? c1 + 48 : c1 + 87;
	c2 = c2 < 10 ? c2 + 48 : c2 + 87;
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_putstr_hex(char *str, unsigned int size)
{
	unsigned int index;

	index = 0;
	while (str[index] && index < size)
	{
		if (index % 2 == 0)
			write(1, " ", 1);
		ft_putchar_hex(str[index]);
		index++;
	}
}

void	ft_putstr(char *str, unsigned int size)
{
	unsigned int index;

	index = 0;
	while (str[index] && index < size)
	{
		if (str[index] >= 32 && str[index] <= 126)
			write(1, &str[index], 1);
		else
			write(1, ".", 1);
		index++;
	}
}

void	ft_putaddr_hex(void *addr)
{
	char			buf[8];
	unsigned long	ul_addr;
	int				index;

	ul_addr = (unsigned long)addr;
	index = 0;
	while (index < 7)
	{
		buf[index] = ul_addr % 256;
		ul_addr /= 256;
		index++;
	}
	while (index >= 0)
	{
		ft_putchar_hex(buf[index]);
		index--;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	index;
	unsigned int	max_size;

	index = 0;
	while (index < size)
	{
		max_size = size < 16 ? size : 16;
		ft_putaddr_hex(addr);
		write(1, ":", 1);
		ft_putstr_hex(addr, max_size);
		write(1, " ", 1);
		ft_putstr(addr, max_size);
		write(1, "\n", 1);
		addr += 16;
		index += 16;
	}
	return (addr);
}
