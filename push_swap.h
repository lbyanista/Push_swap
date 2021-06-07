/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:37:45 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/07 11:29:10 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct s_stack
{
    int *stack_a;
    int *stack_b;
}               t_stack;


void    push_swap(int ac, char **av);
// int     check_args(int ac, char **av);
long 	ft_atoi(char *c);
int		ft_isdigit(int c);
int ft_isnumber(const char *str);