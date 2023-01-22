/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:40:42 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/22 23:30:15 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_high(t_vu **stack_a, t_vu **stack_b)
{
	
    int size =  (ft_lstsize(*stack_a)/5);
    int i = 1;
    int x = 0;
	while (ft_lstsize(*stack_a))
    {
    //    printf("%d -->> %d\n", (*stack_a)->data, (*stack_a)->index);
        if ((*stack_a)->index <= size * i)
        {
            push_b(stack_a,stack_b);
            if ((*stack_b)->index <= (size * i) - (size / 2))
                rotate_rb(stack_b);
            x++;
        }
        else
            rotate_ra(stack_a);
        if(x == size*i)
            i++;
    }
}