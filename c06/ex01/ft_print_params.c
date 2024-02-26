/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkora <fkora@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:08:43 by fkora             #+#    #+#             */
/*   Updated: 2024/02/13 09:14:20 by fkora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			while (*argv[i])
			{
				ft_putchar(*argv[i]);
				argv[i]++;
			}
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
