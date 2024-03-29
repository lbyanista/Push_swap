/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:54:20 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/08 10:21:55 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_isnumber(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		if ((av[i][0] == '-') && ft_isdigit(av[i][1]))
			j++;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			j++;
		}
		i++;
	}
}
