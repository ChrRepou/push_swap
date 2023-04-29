/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:08:37 by crepou            #+#    #+#             */
/*   Updated: 2023/04/29 17:28:07 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_identify(int *smallest, int *biggest)
{
	int	i;

	i = 0;
	(*smallest) = 0;
	(*biggest) = 0;
	while (i < 3)
	{
		if (a[i] < a[(*smallest)])
			(*smallest) = i;
		else if (a[i] > a[(*biggest)])
			(*biggest) = i;
		i++;
	}
}

void	sort_3(int **stack_a, t_stack_info **stack_a_info)
{
	int	smallest;
	int	biggest;

	sort_identify(&smallest, &biggest);
	if (smallest == 1 && biggest == 0)
		sa(stack_a, stack_a_info);
	else if (smallest == 1 && biggest == 2)
		ra(stack_a, stack_a_info);
	else if (smallest == 0 && biggest == 2)
	{
		sa(stack_a, stack_a_info);
		rra(stack_a, stack_a_info);
	}
	else if (smallest == 2 && biggest == 1)
	{
		sa(stack_a, stack_a_info);
		ra(stack_a, stack_a_info);
	}
	else
		rra(stack_a, stack_a_info);
}

void	small_sort(int **stack_a, t_stack_info *stack_a_info)
{
	
}
