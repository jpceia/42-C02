/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:29:53 by jceia             #+#    #+#             */
/*   Updated: 2020/11/30 20:35:54 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	ft_char_upcase(char c)
{
	return (ft_char_is_lowercase(c) ? c - 32 : c);
}

char	*ft_strupcase(char *str)
{
	unsigned int index;

	index = 0;
	while (str[index])
	{
		str[index] = ft_char_upcase(str[index]);
		index++;
	}
	return (str);
}
