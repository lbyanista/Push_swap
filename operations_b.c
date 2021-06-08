/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:26:13 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/08 20:26:51 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pb(t_stack *s)
{
	if (s->topa == -1)
		return (0);
	s->stack_b[s->topb + 1] = s->stack_a[s->topa];
	s->topb++;
	s->topa--;
	write(1, "pb\n", 3);
	return (1);
}

void	rrb(t_stack *s)
{
	int	i;
	int	tmp;

	i = 0;
	if (s->topb == 0)
		return ;
	while (i < s->topb)
	{
		tmp = s->stack_b[i];
		s->stack_b[i] = s->stack_b[i + 1];
		s->stack_b[i + 1] = tmp;
		i++;
	}
	write(1, "rrb\n", 4);
}

void	rb(t_stack *s)
{
	int	i;
	int	tmp;

	i = s->topb;
	if (s->topb == 0)
		return ;
	while (i > 0)
	{
		tmp = s->stack_b[i];
		s->stack_b[i] = s->stack_b[i - 1];
		s->stack_b[i - 1] = tmp;
		i--;
	}
	write(1, "rb\n", 3);
}
