/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:29:53 by jceia             #+#    #+#             */
/*   Updated: 2020/11/30 16:14:04 by jceia            ###   ########.fr       */
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
	int i;

	i = 0;
	while (str[i] != 0)
	{
		str[i] = ft_char_lowcase(str[i]);
		i++;
	}
	return (str);
}
