/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:16:31 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/08 14:16:50 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_table(int ac, t_stack *s)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < (ac - 1))
	{
		j = i + 1;
		while (j < (ac - 1))
		{
			if (s->table[i] > s->table[j])
			{
				tmp = s->table[i];
				s->table[i] = s->table[j];
				s->table[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
