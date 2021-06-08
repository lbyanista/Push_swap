/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:29:05 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/08 12:50:31 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sa(t_stack *s, int i)
// {
// 	int	tmp;
// 	// int	i;

// 	// i = 0;
// 	// tmp = s->stack_a[i];
// 	// printf("\n**sa**\n");
// 	// s->stack_a[i] = s->stack_a[i + 1];
// 	// s->stack_a[i + 1] = tmp;
// 	// printf("--------------------------\n");
// 	// printf("%d %d\n", s->stack_a[i], s->stack_a[i + 1]);
// 	printf("\ni = %d\n", i);
// 	i = i - 1;
// 	if (s->stack_a[i] > s->stack_a[i - 1] && s->stack_a[i] > s->stack_a[i - 2])
// 	{
// 		tmp = s->stack_a[i];
// 		s->stack_a[i] = s->stack_a[i - 2];
// 		s->stack_a[i] = tmp;
// 	}
// }

// void	sa2(t_stack *s, int i)
// {
// 	printf("wiii3\n");
// 	int tmp = 0;
// 	tmp = s->stack_a[i];
// 	s->stack_a[i] = s->stack_a[i - 1];
// 	s->stack_a[i - 1] = tmp;
// }

// void	push_swap(int ac, char **av)
// {
// 	int		i;
// 	t_stack	*s;

// 	i = 0;
// 	s = malloc(sizeof(t_stack));
// 	s->stack_a = malloc(sizeof(int) * (ac - 1));
// 	while (i < (ac - 1))
// 	{
// 		s->stack_a[i] = ft_atoi(av[ac - i - 1]);
// 		i++;
// 	}
// 	printf("-*-*-* %d -*-*-*\n",i);
// 	// i = 0;
// 	int t = i;
// 	int k = i;
// 	printf("\nstack_a[0]: %d\n", s->stack_a[0]);
// 	while (i >= 1)
// 	{
// 		printf("ok %d\n", s->stack_a[i - 1]);
// 		i--;
// 	}
// 	// i = 0;
// 	if (s->stack_a[t - 1] > s->stack_a[t - 2])
// 		sa(s, t);
// 	if (s->stack_a[k - 2] < s->stack_a[k - 1])
// 		sa2(s, k);
	
// 	while (i < (ac - 1))
// 	{
// 		printf("********** %d ********\n", s->stack_a[i]);
// 		i++;
// 	}
// }

void	sort_table(int ac, t_stack *s)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = 0;
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

int	ft_is_sorted(int *table, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (table[i] < table[i + 1])
			return (0);
		i++;
	}
	return (1);
}

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


void	sorthree(t_stack *s)
{
	if ((s->stack_a[2] > s ->stack_a[1]) && (s->stack_a[2] > s->stack_a[0]))
		ra(s);
	if ((s->stack_a[1] > s->stack_a[2]) && (s->stack_a[1] > s->stack_a[0]))
		rra(s);
	if (s->stack_a[1] < s->stack_a[2])
		sa(s);
}

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

void	pa(t_stack *s)
{
	if (s->topb == -1)
		return ;
	s->stack_a[s->topa + 1] = s->stack_b[s->topb];
	s->topa++;
	s->topb--;
	write(1, "pa\n", 3);
}

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
				while (s->table[0] != s->stack_a[s->topa]
				&& (s->table[1] != s->stack_a[s->topa]))
					rra(s);
			else
				while (s->table[0] != s->stack_a[s->topa]
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

int	ft_div(int n)
{
	if (n > 150)
		return (n / 12);
	return (n / 6);
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

int	ft_index(int x, int *tab)
{
	int	i;

	i = 0;
	while (tab[i] != x)
		i++;
	return (i);
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

void	sorting_a(t_stack *s)
{
	int	i;
	int	div;

	i = 0;
	div = ft_div(s->table_len);
	while ((i + 1) * div < s->table_len)
	{
		pushb(s, i * div, (div * i) + div);
		i++;
	}
	while (s->topa != -1)
		pb(s);
	pusha(s);
}

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
	}
	else
		printf("enter one or more arguments\n");
	return (0);
}
