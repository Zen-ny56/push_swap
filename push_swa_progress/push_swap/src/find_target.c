/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:00:48 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:00:48 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_target_index(t_list **stack_a, t_list *stack_b)
{
	int		min_diff;
	int		diff;
	int		target;
	t_list	*temp_a;

	temp_a = *stack_a;
	target = 0;
	min_diff = INT_MAX;
	while (temp_a)
	{
		diff = temp_a->index - stack_b->index;
		if (diff > 0 && diff < min_diff)
		{
			min_diff = diff;
			target = temp_a->pos_a;
		}
		temp_a = temp_a->next;
	}
	return (target);
}

int	cheapest_cost(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	int		cheapest_cost;
	int		cost;
	int		cheapest_pos;

	temp = *stack_b;
	cheapest_cost = INT_MAX;
	while (temp)
	{
		(*stack_a)->target_pos = find_target_index(stack_a, temp);
		cost = retrieve_cost_for_target(*stack_a, (*stack_a)->target_pos);
		cost += temp->cost_b;
		if (cost < cheapest_cost)
		{
			cheapest_cost = cost;
			cheapest_pos = temp->pos_b;
		}
		temp = temp->next;
	}
	return (cheapest_pos);
}


int	retrieve_cost_for_target(t_list *stack, int target_pos)
{
	t_list	*temp; 

	temp = stack;
	while (temp)
	{
		if (temp->pos_a == target_pos)
			return (temp->cost_a);
		temp = temp->next;
	}
	return (-1);
}

// void	display_combined_costs(t_list *stack)
// {
// 	while (stack)
// 	{
// 		printf("%d\n", cheapest_pos);
// 		stack = stack->next;
// 	}
// }
