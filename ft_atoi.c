/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:36:52 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/07 11:28:17 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *c)
{
	long	sign;
	long	i;

	sign = 1;
	i = 0;
	while ((*c >= 9 && *c <= 13) || *c == ' ')
		(c)++;
	if (*c == '+' || *c == '-')
	{
		if (*c == '-')
			sign *= -1;
		(c)++;
	}
	while (*c && *c >= '0' && *c <= '9')
	{
		i = (i * 10) + (*c - '0');
		if (i < 0 && sign == -1)
			return (0);
		c++;
	}
	return (i * sign);
}
