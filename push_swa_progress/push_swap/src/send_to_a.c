/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:54:04 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:54:04 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_to_a(t_list **stack_a, t_list **stack_b)
{
	int	cheapest_pos;

	while (*stack_b)
	{
		assign_a(stack_a);
		assign_b(stack_b);
		find_cost(stack_a, stack_b);
		cheapest_pos = cheapest_cost(stack_a, stack_b);
		rearrange(stack_a, stack_b, &cheapest_pos);
		pa(stack_b, stack_a);
	}
	// display_index(*stack_a);
	exit(0);
}
