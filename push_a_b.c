/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:07:06 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/08 14:22:17 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index(int x, int *tab)
{
	int	i;

	i = 0;
	while (tab[i] != x)
		i++;
	return (i);
}

void	pusha(t_stack *s)
{
	int	i;
	int	index;

	i = 0;
	while (i < s->table_len)
	{
		index = ft_index(s->table[s->table_len - i - 1], s->stack_b);
		if (index < s->topb / 2)
			while (s->stack_b[s->topb] != s->table[s->table_len - i - 1])
				rrb(s);
		else
			while (s->stack_b[s->topb] != s->table[s->table_len - i - 1])
				rb(s);
		pa(s);
		i++;
	}
}

void	pushb(t_stack *s, int start, int end)
{
	int	j;
	int	i;

	i = start;
	j = 0;
	while (j < s->topa)
	{
		i = start;
		while (i < end)
		{
			if (s->stack_a[s->topa - j] == s->table[i])
			{
				rotate_a(s, i, j);
				j = 0;
				i = -1;
			}
			i++;
		}
		j++;
	}
}
