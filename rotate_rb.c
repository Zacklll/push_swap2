/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:00:22 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/22 22:23:03 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_rb(t_vu **stack_b)
{
	t_vu *head;
    if (!stack_b)
	    return;
	head = (*stack_b);
	(*stack_b) = head->next;
	ft_lstadd_back(stack_b, head);
	head->next = NULL;
	printf("rb\n");
}