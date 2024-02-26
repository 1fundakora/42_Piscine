/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkora <fkora@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 03:40:50 by fkora             #+#    #+#             */
/*   Updated: 2024/02/14 12:08:51 by fkora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	sayidegeri;
	int	*dizi;
	int	i;

	i = 0;
	sayidegeri = max - min;
	if (max <= min)
		return (0);
	dizi = (int *)malloc(sayidegeri * sizeof(int));
	while (min < max)
	{
		dizi[i] = min;
		i++;
		min++;
	}
	dizi[i] = '\0';
	return (dizi);
}
