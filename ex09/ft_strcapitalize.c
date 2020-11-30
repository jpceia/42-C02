/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:29:53 by jceia             #+#    #+#             */
/*   Updated: 2020/11/30 18:24:05 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_char_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_char_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_char_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_char_is_alphanumeric(char c)
{
	return (
		ft_char_is_uppercase(c) ||
		ft_char_is_lowercase(c) ||
		ft_char_is_numeric(c));
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		prev_blank;

	prev_blank = 1;
	i = 0;
	while (str[i] != 0)
	{
		if (ft_char_is_lowercase(str[i]) && prev_blank)
			str[i] = str[i] - 32;
		if (ft_char_is_uppercase(str[i]) && !prev_blank)
			str[i] = str[i] + 32;
		prev_blank = 0;
		if (!ft_char_is_alphanumeric(str[i]))
			prev_blank = 1;
		i++;
	}
	return (str);
}
