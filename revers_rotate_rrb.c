/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_rotate_rrb.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:43:18 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/28 21:47:59 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revers_rotate_rrb(t_vu **stack_b)
{
	t_vu	*tmp;
	t_vu	*tmp2;

	if (!*stack_b || ft_lstsize(*stack_b) < 2)
		return ;
	tmp = (*stack_b);
	tmp2 = tmp;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp2->next = NULL;
	ft_lstadd_front(stack_b, tmp);
	ft_printf("rrb\n");
}
