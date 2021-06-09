/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:39:35 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/09 19:53:18 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_is_int(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if ((av[i][0] != '-' && ft_strlen(av[i]) > 10) ||
			((av[i][0] != '-') && ft_strlen(av[i]) == 10
			&& ft_strcmp(av[i], "2147483647") > 0))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		if ((av[i][0] == '-' && ft_strlen(av[i]) > 11) ||
		 	((av[i][0] == '-') && ft_strlen(av[i]) == 11
			&& ft_strcmp(av[i], "-2147483648") > 0))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

void	ft_is_duplicates(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (!ft_strcmp(av[i], av[j]))
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	ft_check_args(int ac, char **av)
{
	ft_isnumber(ac, av);
	ft_is_duplicates(ac, av);
	ft_is_int(ac, av);
}
