/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:37:45 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/08 10:43:16 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int topa;
	int topb;
	int *table;
	int table_len;
}				t_stack;

void	push_swap(int ac, char **av);
long	ft_atoi(char *c);
int		ft_isdigit(int c);
void	ft_isnumber(int ac, char **av);
int 	ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void    ft_check_args(int ac, char **av);
int		ft_strcmp(char *s1, char *s2);
#endif