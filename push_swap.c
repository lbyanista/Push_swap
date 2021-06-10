/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:29:05 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/10 10:13:51 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	allocations(t_stack *s, int ac)
{
	s->topa = ac - 2;
	s->table_len = ac - 1;
	s->stack_a = (int *)malloc((ac - 1) * sizeof(int));
	if (s->stack_a == 0)
		exit(1);
	s->stack_b = (int *)malloc((ac - 1) * sizeof(int));
	if (s->stack_b == 0)
	{
		free(s->stack_a);
		exit(1);
	}
	s->table = (int *)malloc((ac - 1) * sizeof(int));
	if (s->table == 0)
	{
		free(s->stack_b);
		free(s->stack_a);
		exit(1);
	}
	s->topb = -1;
}

void	free_stack(t_stack s)
{
	free(s.stack_a);
	free(s.stack_b);
	free(s.table);
}

int	main(int ac, char **av)
{
	t_stack	s;

	if (ac > 1)
	{
		ft_check_args(ac, av);
		allocations(&s, ac);
		filling_a(&s, ac, av);
		if (ft_is_sorted(s.stack_a, s.topa))
			return (0);
		if (ac == 3)
			sa(&s);
		else if (ac == 4)
			sorthree(&s);
		else if (ac == 5)
			sortfour(&s, 0);
		else if (ac == 6)
			sortfive(&s, 0);
		else
			sorting_a(&s);
		free_stack(s);
		return (0);
	}
	return (0);
}
