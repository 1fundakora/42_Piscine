/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:19:24 by marvin            #+#    #+#             */
/*   Updated: 2024/02/06 22:19:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 1;
	sign = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		str++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			result *= -1;
		str++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		sign = sign * 10 + str[i] - 48;
		str++;
	}
	return (result * sign);
}
