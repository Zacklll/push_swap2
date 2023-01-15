/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:13:20 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/14 00:43:54 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int max(t_vu *stack_a)
{
	t_vu *k;
	k = stack_a;
	int c;

	c = k->data;
	while (k->next)
	{
		if (c < k->next->data)
			c = k->next->data;
		k = k->next;
	}
	return c;
}

int min(t_vu *stack_a)
{
	t_vu *k;
	k = stack_a;
	int c;

	c = k->data;
	while (k->next)
	{
		if (c > k->next->data)
			c = k->next->data;
		k = k->next;
	}
	return c;
}

int	main(int ac, char *av[])
{
	(void)ac;
	t_vu *stack_a;
	t_vu *stack_b;

	
	int i, j;
	i = 1;
	char **tmp;
	while (av[i])
	{
		j = 0;
		tmp = ft_split(av[i], ' ');
		while (tmp[j])
		{
			ft_lstadd_back(&stack_a, ft_lstnew(atoi(tmp[j])));
			j++;
		}
		i++;
	}
	// t_vu *pt = stack_a;
	// if (ft_lstsize(stack_a) == 3)
	// 	sort_3numb(&stack_a);
		
	// else if (ft_lstsize(stack_a) == 5)
	// {
		if (stack_a->data != min(stack_a))
		{
			rotate_ra(&stack_a);
			if (stack_a->data != min(stack_a))
				rotate_ra(&stack_a);
		}
		push_b(&stack_a,&stack_b);
		push_b(&stack_a,&stack_b);
		sort_3numb(&stack_a);
		push_a(&stack_a,&stack_b);
		push_a(&stack_a,&stack_b);
	
		// printf(" data %d \n ", stack_a->data);
		
	// 	if (stack_a->data == min(stack_a))
	// 	{	
	// 		push_b(&stack_a,&stack_b);
	// 		printf("pb\n");
	// 		push_b(&stack_a,&stack_b);
	// 		printf("pb\n");
	// 		sort_3numb(&stack_a);
	// 	}
	// 	push_a(&stack_a,&stack_b);
	// 	printf("pa\n");
	// 	push_a(&stack_a,&stack_b);
	// 	printf("pa\n");
	// }
	// push_a(&stack_a, &stack_b);
	// t_vu *k = stack_a;

	// while (k)
	// {
	// 	printf("%d\n",k->data);
	// 	k = k->next;
	// }

	
		
	t_vu *p = stack_a;
		
		while (p)
		{
			printf(" %d\n ", p->data);
			p = p->next;
		}
}