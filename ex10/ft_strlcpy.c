/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:29:53 by jceia             #+#    #+#             */
/*   Updated: 2020/11/28 18:58:32 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while ((src[i] != 0) && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size - 1)
	{
		dest[i] = 0;
		i++;
	}
	if (size > 0)
		dest[size - 1] = 0;
	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}
