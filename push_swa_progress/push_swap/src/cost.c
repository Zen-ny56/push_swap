/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:00:02 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:00:02 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_cost(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp_a;
	int		forward;
	int		backwards;
	int		cost_a;

	temp_a = *stack_a;
	cost_a = 0;
	while (temp_a)
	{
		forward = temp_a->pos_a;
		backwards = ft_lstsize(*stack_a) - forward;
		if (backwards < forward)
			temp_a->cost_a = backwards;
		else
			temp_a->cost_a = forward;
		temp_a = temp_a->next;
	}
	costforb(stack_b);
}

void	costforb(t_list **stack_b)
{
	t_list	*temp_b;
	int		forward;
	int		backwards;
	int		cost_b;

	temp_b = *stack_b;
	cost_b = 0;
	while (temp_b)
	{
		forward = temp_b->pos_b;
		backwards = ft_lstsize(*stack_b) - forward;
		if (backwards < forward)
			temp_b->cost_b = backwards;
		else
			temp_b->cost_b = forward;
		temp_b = temp_b->next;
	}
}
