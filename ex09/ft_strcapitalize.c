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

int	is_uppercase_alpha(char c)
{
	return (c >= 65 && c <= 90); 
}

int		is_alpha(char c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int		is_blank(char c)
{
	return (c == 32)

char	*ft_strcapitalize(char *str)
{
	int i;
	char c;
	int prev_blank;
   
	prev_blank = 1;
	i = 0
	while (*src != 0)
	{
		c = *(src + i);
		if (!is_alpha(c))
		{
			prev_blank = 1;
		}
		else if(
		*(src + i) = *(src + i) - 32;
		i++;
	}
	return (src);
}
