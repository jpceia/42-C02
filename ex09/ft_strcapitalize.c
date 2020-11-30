/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:29:53 by jceia             #+#    #+#             */
/*   Updated: 2020/11/28 20:24:04 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_uppercase(char c)
{
	return (c >= 65 && c <= 90); 
}

int	ft_is_lowercase(char c)
{
	return (c >= 97 && c <= 122);
}

int	ft_is_number(char c)
{
	return (c >= 48 && c <= 57);
}

int	ft_is_alphanumeric(char c)
{
	return (ft_is_uppercase(c) ||
		ft_is_lowercase(c) ||
		ft_is_number(c));
}

char	*ft_strcapitalize(char *str)
{
	int i;
	char c;
	int prev_blank;
   
	prev_blank = 1;
	i = 0;
	while (str[i] != 0)
	{
		if (ft_is_lowercase(str[i]) && prev_blank)
			str[i] = str[i] - 32;
		if (ft_is_uppercase(str[i]) && !prev_blank)
			str[i] = str[i] + 32;
		prev_blank = 0;
		if (!ft_is_alphanumeric(str[i]))
			prev_blank = 1;
		i++;
	}
	return (str);
}

int	main()
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(s);
	puts(s);
}
