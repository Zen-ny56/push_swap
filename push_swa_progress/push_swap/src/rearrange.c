/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rearrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:05:42 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:05:42 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rearrange(t_list **stack_a, t_list **stack_b, int *cheapest_pos)
{
	while ((*stack_b))
	{
		if ((*stack_b)->pos_b == (*cheapest_pos))
			break ;
	}
	while ((*stack_a)->target_pos > 0 && (*stack_b)->pos_b > 0)
	{
		if ((*stack_b)->pos_b < whole(*stack_b)
			&& (*stack_a)->target_pos < whole(*stack_a))
		{
			rr(stack_a, stack_b);
		}
		if ((*stack_b)->pos_b > whole(*stack_b)
			&& (*stack_a)->target_pos > whole(*stack_a))
		{
			rrr(stack_a, stack_b);
		}
	}
	while ((*stack_b)->pos_b > 0)
	{
		if ((*stack_b)->pos_b < whole(*stack_b))
			rb(stack_b);
		if ((*stack_b)->pos_b > whole(*stack_b))
			rrb(stack_b);
	}
	while ((*stack_a)->target_pos > 0)
	{
		if ((*stack_a)->target_pos < whole(*stack_a))
			ra(stack_a);
		if ((*stack_b)->target_pos > whole(*stack_a))
			rra(stack_a);
	}
}


int	whole(t_list *stack)
{
	if ((ft_lstsize(stack) % 2) == 0)
		return (ft_lstsize(stack) / 2);
	else 
		return (((ft_lstsize(stack) / 2) + 1));
}
