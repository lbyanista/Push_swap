/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:17:13 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/08 14:17:33 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
