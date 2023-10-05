/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:03:05 by naadam            #+#    #+#             */
/*   Updated: 2023/10/04 20:50:48 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize((*stack_a)) == 2)
		sa(stack_a);
	if (ft_lstsize((*stack_a)) == 3)
		sort_tatu(stack_a);
	if (ft_lstsize((*stack_a)) > 3)
		sort_large(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	**arguments;

	if (argc < 2)
		ft_error();
	arguments = check_arguments(argc, argv);
	stack_a = (t_list **)ft_calloc(1, sizeof(t_list));
	stack_b = (t_list **)ft_calloc(1, sizeof(t_list));
	init_stack(stack_a, arguments);
	if (!stack_a || !stack_b)
		return (0);
	if (check_sorted(stack_a) == 0)
	{
		ft_putstr_fd("Already Sorted \n", 1);
		free_stack(stack_a);
		exit(1);
	}
	// if (check_sorted(stack_a) == 1)
	sort(stack_a, stack_b);
	display_stack(*stack_a);
	free_stack(stack_a);
	free_stack(stack_b);
	exit(0);
}
