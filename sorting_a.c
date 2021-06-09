/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:06:05 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/09 14:58:51 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_div(int n)
{
	if (n > 250)
		return (n / 12);
	return (n / 6);
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
