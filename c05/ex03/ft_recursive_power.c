/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkora <fkora@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 02:58:03 by fkora             #+#    #+#             */
/*   Updated: 2024/02/12 14:23:54 by fkora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
