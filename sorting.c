/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:18:36 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/08 20:31:42 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortfour(t_stack *s, int i)
{
	while (i <= s->topa)
	{
		if (s->table[0] == s->stack_a[i])
		{
			if (i < s->topa / 2)
				while (s->table[0] != s->stack_a[s->topa])
					rra(s);
			else
				while (s->table[0] != s->stack_a[s->topa])
					ra(s);
			pb(s);
			i = 0;
			continue ;
		}
		i++;
	}
	sorthree(s);
	pa(s);
	if (s->stack_a[s->topa] > s->stack_a[s->topa - 1])
		sa(s);
}

void	sortfive(t_stack *s, int i)
{
	while (i <= s->topa)
	{
		if ((s->table[0] == s->stack_a[i]) || (s->table[1] == s->stack_a[i]))
		{
			if (i < s->topa / 2)
				while (s->table[0] != s->stack_a[s->topa] \
						&& (s->table[1] != s->stack_a[s->topa]))
					rra(s);
			else
				while (s->table[0] != s->stack_a[s->topa] \
				&& (s->table[1] != s->stack_a[s->topa]))
					ra(s);
			pb(s);
			i = -1;
		}
		i++;
	}
	sorthree(s);
	pa(s);
	pa(s);
	if (s->stack_a[s->topa] > s-> stack_a[s->topa - 1])
		sa(s);
}

void	sorthree(t_stack *s)
{
	if ((s->stack_a[2] > s->stack_a[1]) && (s->stack_a[2] > s->stack_a[0]))
		ra(s);
	if ((s->stack_a[1] > s->stack_a[2]) && (s->stack_a[1] > s->stack_a[0]))
		rra(s);
	if (s->stack_a[1] < s->stack_a[2])
		sa(s);
}
