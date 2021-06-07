/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:29:05 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/07 19:46:27 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	while (i < ac)
	{
		if (ft_atoi(av[i]) > 2147483647 || ft_atoi(av[i]) < -2147483648
			|| ft_isnumber(av[i]) == 0)
			return (1);
		while (j < ac)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]) && (i != j))
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

void	sa(t_stack *s, int i)
{
	int	tmp;
	// int	i;

	// i = 0;
	// tmp = s->stack_a[i];
	// printf("\n**sa**\n");
	// s->stack_a[i] = s->stack_a[i + 1];
	// s->stack_a[i + 1] = tmp;
	// printf("--------------------------\n");
	// printf("%d %d\n", s->stack_a[i], s->stack_a[i + 1]);
	printf("\ni = %d\n", i);
	i = i - 1;
	if (s->stack_a[i] > s->stack_a[i - 1] && s->stack_a[i] > s->stack_a[i - 2])
	{
		tmp = s->stack_a[i];
		s->stack_a[i] = s->stack_a[i - 2];
		s->stack_a[i] = tmp;
	}
}

void	sa2(t_stack *s, int i)
{
	printf("wiii3\n");
	int tmp = 0;
	tmp = s->stack_a[i];
	s->stack_a[i] = s->stack_a[i - 1];
	s->stack_a[i - 1] = tmp;
}

void	push_swap(int ac, char **av)
{
	int		i;
	t_stack	*s;

	i = 0;
	s = malloc(sizeof(t_stack));
	s->stack_a = malloc(sizeof(int) * (ac - 1));
	while (i < (ac - 1))
	{
		s->stack_a[i] = ft_atoi(av[ac - i - 1]);
		i++;
	}
	printf("-*-*-* %d -*-*-*\n",i);
	// i = 0;
	int t = i;
	int k = i;
	printf("\nstack_a[0]: %d\n", s->stack_a[0]);
	while (i >= 1)
	{
		printf("ok %d\n", s->stack_a[i - 1]);
		i--;
	}
	// i = 0;
	if (s->stack_a[t - 1] > s->stack_a[t - 2])
		sa(s, t);
	if (s->stack_a[k - 2] < s->stack_a[k - 1])
		sa2(s, k);
	
	while (i < (ac - 1))
	{
		printf("********** %d ********\n", s->stack_a[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		if (check_args(ac, av))
		{
			printf("Error\n");
			return (0);
		}
		push_swap(ac, av);
	}
	else
		printf("enter int number\n");
	return (0);
}
