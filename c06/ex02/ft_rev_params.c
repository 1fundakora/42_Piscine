/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkora <fkora@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:09:36 by fkora             #+#    #+#             */
/*   Updated: 2024/02/13 09:15:07 by fkora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc >= 1)
	{
		i = argc -1;
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
			{
				ft_putchar (argv[i][j]);
				j++;
			}
			i--;
			ft_putchar('\n');
		}
	}
	return (0);
}
