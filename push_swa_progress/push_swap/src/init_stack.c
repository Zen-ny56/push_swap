/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:02:00 by naadam            #+#    #+#             */
/*   Updated: 2023/09/28 20:15:05 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_list **stack_a, char **arguments)
{
	int		i;
	int		value;
	t_list	*new;

	i = 0;
	while (arguments[i] != 0)
	{
		value = ft_atoi(arguments[i], stack_a);
		new = ft_lstnew(value);
		ft_lstadd_back(stack_a, new);
		i++;
	}
	if (check_dup(stack_a) == false)
	{
		free_stack(stack_a);
		ft_error();
	}
	index_stack(stack_a);
}


void	display_stack(t_list *stack_a)
{
	while (stack_a != NULL)
	{
		printf("Stack: %d\n", stack_a->value);
		stack_a = stack_a->next;
	}
}

void	display_index(t_list *stack_a)
{
	while (stack_a != NULL)
	{
		printf("Stack: %d\n", stack_a->index);
		stack_a = stack_a->next;
	}
}