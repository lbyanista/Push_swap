/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:09:13 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/09 14:36:42 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *s)
{
	int	i;

	if (s->topa == 0)
		return ;
	i = s->stack_a[s->topa];
	s->stack_a[s->topa] = s->stack_a[s->topa - 1];
	s->stack_a[s->topa - 1] = i;
	write(1, "sa\n", 3);
}

void	ra(t_stack *s)
{
	int	i;
	int	tmp;

	i = s->topa;
	if (s->topa == 0)
		return ;
	while (i > 0)
	{
		tmp = s->stack_a[i];
		s->stack_a[i] = s->stack_a[i - 1];
		s->stack_a[i - 1] = tmp;
		i--;
	}
	write(1, "ra\n", 3);
}

void	rra(t_stack *s)
{
	int	i;
	int	tmp;

	i = 0;
	if (s->topa == 0)
		return ;
	while (i < s->topa)
	{
		tmp = s->stack_a[i];
		s->stack_a[i] = s->stack_a[i + 1];
		s->stack_a[i + 1] = tmp;
		i++;
	}
	write(1, "rra\n", 4);
}

void	pa(t_stack *s)
{
	if (s->topb == -1)
		return ;
	s->stack_a[s->topa + 1] = s->stack_b[s->topb];
	s->topa++;
	s->topb--;
	write(1, "pa\n", 3);
}

void	rotate_a(t_stack *s, int i, int j)
{
	if (j < (s->topa / 2))
		while (s->table[i] != s->stack_a[s->topa])
			ra(s);
	else
		while (s->table[i] != s->stack_a[s->topa])
			rra(s);
	pb(s);
}
