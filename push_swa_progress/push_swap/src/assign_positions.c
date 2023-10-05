/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_positions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:59:06 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 23:35:24 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_a(t_list **stack_a)
{
	int		pos_a;
	t_list	*temp;

	pos_a = 0;
	temp = *stack_a;
	while (temp)
	{
		temp->pos_a = pos_a++;
		temp = temp->next;
	}
	return ;
}

void	assign_b(t_list **stack_b)
{
	int		pos_b;
	t_list	*temp;

	pos_b = 0;
	temp = *stack_b;
	while (temp)
	{
		temp->pos_b = pos_b++;
		temp = temp->next;
	}
	return ;
}
