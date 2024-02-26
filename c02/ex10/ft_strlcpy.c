/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkora <fkora@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 03:49:37 by fkora             #+#    #+#             */
/*   Updated: 2024/02/08 00:39:20 by fkora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_lenght;

	src_lenght = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != 0 && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (src_lenght);
}
