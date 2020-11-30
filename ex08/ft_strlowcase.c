/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:29:53 by jceia             #+#    #+#             */
/*   Updated: 2020/11/30 20:25:14 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	ft_char_lowcase(char c)
{
	return (ft_char_is_uppercase(c) ? c + 32 : c);
}

char	*ft_strlowcase(char *str)
{
	unsigned int index;

	index = 0;
	while (str[index])
	{
		str[index] = ft_char_lowcase(str[index]);
		index++;
	}
	return (str);
}
