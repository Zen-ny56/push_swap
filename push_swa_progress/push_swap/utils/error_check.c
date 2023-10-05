/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:07:15 by naadam            #+#    #+#             */
/*   Updated: 2023/09/28 20:49:00 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_num(char *args)
{
	int	i;

	i = 0;
	if (isempty(args) == true)
		return (false);
	while (args[i] != 0)
	{
		if (ft_isdigit(args[i]) == 0)
			return (false);
		if ((args[i] == '+' || args[i] == '-')
			&& (args[i + 1] == '\0' || args[i + 1] == 32))
			return (false);
		if ((args[i] >= 48 && args[i] <= 57)
			&& (args[i + 1] == '-' || args[i + 1] == '+'))
			return (false);
		i++;
	}
	return (true);
}

bool	isempty(char *argv)
{
	long int	i;

	i = 0;
	if (ft_strlen(&argv[i]) == 0)
		return (true);
	while (argv[i] != '\0')
	{
		if (argv[i] != ' ')
			return (false);
		i++;
	}
	return (true);
}
