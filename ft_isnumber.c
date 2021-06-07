/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:54:20 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/06/06 10:40:24 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_isnumber(const char *str) 
{
    while(*str != '\0')
    {
        if(*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}

// int main(int ac, char **av)
// {
//     int k = 1;
//     int i = 0;
//     if(ac > 1){
//         while (av[k])
//         {
//             i = ft_isnumber(av[k]);
//             if(!i)
//                 return (printf("%d\n", i));
//             k++;
//         }
//         printf("%d\n", i);
//     }
//     else
//         printf("We Need more than one argument\n");
//     return 0;
// }