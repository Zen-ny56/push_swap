/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rearrange_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:04:55 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:04:55 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rearrange_b(t_list **stack_b, int *cost)
{
	int		ro_cost;
	int		rr_cost;
	t_list	*temp;

	temp = *stack_b;
	ro_cost = temp->cheapest_pos;
	rr_cost = ft_lstsize(*stack_b) - ro_cost;
	if (temp->cheapest_pos != 0)
	{
		if (ro_cost < rr_cost)
		{
			while (ro_cost--)
				rb(stack_b);
		}
		else
		{
			while (rr_cost--)
				rrb(stack_b);
		}
		(*cost)--;
	}
}
