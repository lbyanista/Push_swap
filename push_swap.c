/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:29:05 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/08 14:57:42 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack s;

	if (ac > 1)
	{
		ft_check_args(ac, av);
		s.topa = ac - 2;
		s.table_len = ac - 1;
		s.stack_a = (int *)malloc((ac - 1) * sizeof(int));
		s.stack_b = (int *)malloc((ac - 1) * sizeof(int));
		s.table = (int *)malloc((ac - 1) * sizeof(int));
		s.topb = -1;
		rembil_a(&s, ac, av);
		if (ft_is_sorted(s.stack_a, s.topa))
			return (0);
		printf("\n%d\n", ac);
		if(ac == 3)
			sa(&s);
		if(ac == 4)
			sorthree(&s);
		if(ac == 5)
			sortfour(&s, 0);
		if(ac == 6)
			sortfive(&s, 0);
		else
			sorting_a(&s);
		free(s.stack_a);
		free(s.stack_b);
		free(s.table);
		printf("hh\n\n");
		return (0);
	}
	else
		write(1, "enter one or more arguments\n", 28);
	return (0);
}
