/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:29:05 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/07 12:21:10 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     check_args(int ac, char **av)
{
    int	i;
	int	j;
    long h;

	i = 1;
	j = 2;
	while (i < ac)
	{
        // h = ft_atoi(av[i]);
        // printf("\n******%ld*******\n",h);
		if (ft_atoi(av[i]) > 2147483647 || ft_atoi(av[i]) < -2147483648 || ft_isnumber(av[i]) == 0)
			return (1);

		while (j < ac)
		{
			// printf("i(%d):%ld\n", i,ft_atoi(av[i]));
			// printf("j(%d):%ld\n\n", j,ft_atoi(av[j]));
			if (ft_atoi(av[i]) == ft_atoi(av[j]) && (i != j))
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return(0);
}

void	sa(t_stack *s, int ac)
{
	printf("\n**sa**\n");
	int tmp;

	int i = 0;

	tmp = s->stack_a[i];
	s->stack_a[i] = s->stack_a[i + 1];
	s->stack_a[i + 1] = tmp;
	printf("--------------------------\n");
	printf("%d %d\n", s->stack_a[i], s->stack_a[i+1]);
}

void    push_swap(int ac, char **av)
{
    printf("in push_swap\n");
	t_stack *s;
	int i = 0;

	s = malloc(sizeof(t_stack));
	s->stack_a = malloc(sizeof(int) * (ac - 1));
	while (i < (ac - 1))
	{
		s->stack_a[i] = ft_atoi(av[ac - i - 1]);
		i++;
	}
	i = 0;
	while (i < (ac - 1))
	{
		printf("%d\n", s->stack_a[i]);
		i++;
	}
	i = 0;
	if(s->stack_a[i] > s->stack_a[i + 1])
		sa(s, ac);
	
	while (i < (ac - 1))
	{
		printf("**********%d********\n", s->stack_a[i]);
		i++;
	}
}

int main(int ac, char **av)
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