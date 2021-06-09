/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:37:45 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/09 18:02:11 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
// # include <stdio.h>
# include <string.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	topa;
	int	topb;
	int	*table;
	int	table_len;
}				t_stack;

void	push_swap(int ac, char **av);
long	ft_atoi(char *c);
int		ft_isdigit(int c);
void	ft_isnumber(int ac, char **av);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_check_args(int ac, char **av);
int		ft_strcmp(char *s1, char *s2);
void	sorting_a(t_stack *s);
void	filling_a(t_stack *s, int ac, char **av);
int		ft_is_sorted(int *table, int len);
void	sa(t_stack *s);
void	sorthree(t_stack *s);
void	sortfour(t_stack *s, int i);
void	sortfive(t_stack *s, int i);
void	sort_table(int ac, t_stack *s);
void	ra(t_stack *s);
void	rra(t_stack *s);
int		pb(t_stack *s);
void	pa(t_stack *s);
void	pushb(t_stack *s, int start, int end);
void	pusha(t_stack *s);
void	rrb(t_stack *s);
void	rb(t_stack *s);
void	rotate_a(t_stack *s, int i, int j);
#endif