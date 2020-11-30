/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:29:53 by jceia             #+#    #+#             */
/*   Updated: 2020/11/30 18:23:28 by jceia            ###   ########.fr       */
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

char	*ft_str_upercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		str[i] = ft_char_upcase(str[i]);
		i++;
	}
	return (str);
}
