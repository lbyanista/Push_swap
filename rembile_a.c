/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rembile_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:15:36 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/08 20:30:14 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rembil_a(t_stack *s, int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < ac - 1)
	{
		s->stack_a[i] = ft_atoi(av[ac - i - 1]);
		s->table[i] = s->stack_a[i];
		i++;
	}
	sort_table(ac, s);
}
