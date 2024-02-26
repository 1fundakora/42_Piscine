/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkora <fkora@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 03:42:13 by fkora             #+#    #+#             */
/*   Updated: 2024/02/15 00:01:09 by fkora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(sizeof(int) * (size));
	if (arr == NULL)
		return (-1);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}
