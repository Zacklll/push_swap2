/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:35:43 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/20 21:41:11 by zael-wad         ###   ########.fr       */
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

int	sort_tab(t_vu *stack_a)
{
	int i;
	i = 0;
	int *p;

	p = malloc(sizeof(ft_lstsize(stack_a) * sizeof(int)));
	while (stack_a)
	{
		p[i] = stack_a->data;
		stack_a = stack_a->next;
		i++;
	}
	ft_sort_int_tab(p, i);
    int k= 0;
    while (k <= i)
        printf("%d |||", p[k++]);
	return (0);
}