/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:35:43 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/22 23:25:12 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i <= size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

void	loop_stack_a(t_vu *stack_a, int *p)
{
	int		i;
	// t_vu	*p5;
	int		size;

	i = 0;
	size = ft_lstsize(stack_a);
	while (stack_a)
	{
		i = 0;
		while (i < size)
		{
			if (stack_a->data == p[i])
			{
				stack_a->index = i;
				// printf("%d ------ %d \n, ", stack_a->index, i);
				break;
			}
			i++;
		}
		stack_a = stack_a->next;
	}
	free(p);
// 	printf("\n || %d ------ %d \n, ", stack_a->index, i);
	
// 	while (stack_a)
// 	{
// 		printf("test : || %d || ", stack_a->index);
// 		stack_a = stack_a->next;
// 	}
}

int	sort_tab(t_vu *stack_a)
{
	int i;
	int *p;
	t_vu *t;
	t = stack_a;
	i = 0;
	p = malloc(sizeof(ft_lstsize(stack_a) * sizeof(int)));
	if (!p)
		return (free((p)), 0);
	while (t)
	{
		p[i] = t->data;
		t = t->next;
		i++;
	}

	ft_sort_int_tab(p, i);
	// printf("|| %d || \n", p[0]);
	// printf("|| %d || \n", p[1]);
	// printf("|| %d || \n", p[2]);
	// printf("|| %d || \n", p[3]);
	// printf("|| %d || \n", p[4]);
	// printf("|| %d || \n", p[5]);
	// printf("|| %d || \n",p[6]);
	loop_stack_a(stack_a, p);

	return (0);
}