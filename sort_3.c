#include "push_swap.h"

void sort_3numb(t_vu **stack_a)
{   
    if ((*stack_a)->data == max(*stack_a))
    {
        rotate_ra(stack_a);
        if((*stack_a)->data > (*stack_a)->next->data)
        {
            swap_sa(stack_a);
        }
    }
    else if ((*stack_a)->next->data == max(*stack_a))
    {
        revers_rotate_rra(stack_a);
        if ((*stack_a)->data > (*stack_a)->next->data)
        {
            swap_sa(stack_a);
        }
    }
    else
    {
        swap_sa(stack_a);
        if ((*stack_a)->data > (*stack_a)->next->data)
        {
            swap_sa(stack_a);
        }
    }
} 