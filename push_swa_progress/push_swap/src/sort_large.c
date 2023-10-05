/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:06:03 by naadam            #+#    #+#             */
/*   Updated: 2023/10/04 20:23:19 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_large(t_list **stack_a, t_list **stack_b)
{
	send_to_b_by_midpoint(stack_a, stack_b);
	send_to_a(stack_a, stack_b);
	while (check_sorted(stack_a) == 1)
		rra(stack_a);
}

void	sort_tatu(t_list **stack_a)
{
	t_list	*head;

	head = *stack_a;
	//check_sorted(stack_a);
	if (head->value == ft_min(stack_a))
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (ft_lstlast(head)->value == ft_max(stack_a))
		sa(stack_a);
	else if (ft_max(stack_a) == head->value
		&& ft_lstlast(head)->value != ft_min(stack_a))
		ra(stack_a);
	else if (ft_lstlast(head)->value == ft_min(stack_a)
		&& head->value != ft_max(stack_a))
		rra(stack_a);
	else
	{
		sa(stack_a);
		rra(stack_a);
	}
}
