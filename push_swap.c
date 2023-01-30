/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:13:20 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/30 12:14:19 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	find_max_index_stackb(t_vu *stack_b)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->data == max_value(stack_b))
			return (i);
		i++;
		stack_b = stack_b->next;
	}
	return (0);
}

int	find_min(t_vu *stack_a)
{
	int	i;

	i = 0;
	while ((stack_a))
	{
		if ((stack_a)->data == min(stack_a))
		{
			if (i <= ft_lstsize(stack_a) / 2)
				return (-1);
			else if (i > ft_lstsize(stack_a) / 2)
				return (1);
		}
		i++;
		(stack_a) = (stack_a)->next;
	}
	return (1);
}

void	check_rep(t_vu *stack_a)
{
	t_vu	*tmp;
	int		i;

	i = 0;
	while (stack_a->next)
	{
		tmp = stack_a->next;
		while (tmp)
		{
			if (stack_a->data == tmp->data)
			{
				printf("error");
				exit(0);
			}
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
}

void	push_swap(t_vu **stack_a)
{
	t_vu	*stack_b;

	stack_b = NULL;
	check_rep(*stack_a);
	sort_tab(*stack_a);
	if (ft_lstsize(*stack_a) == 3)
		sort_3numb(stack_a);
	else if (ft_lstsize(*stack_a) >= 5 && ft_lstsize(*stack_a) <= 20)
		sort_five(stack_a, &stack_b);
	else
	{
		if (ft_lstsize(*stack_a) > 300)
			sort_high2(stack_a, &stack_b);
		else
			sort_high(stack_a, &stack_b);
		push_back_a(stack_a, &stack_b);
	}
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;
	char	**tmp;
	t_vu	*stack_a;

	i = 1;
	if (ac > 2)
	{
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
	}
	push_swap(&stack_a);
}
