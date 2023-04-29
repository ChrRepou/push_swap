/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:10:30 by crepou            #+#    #+#             */
/*   Updated: 2023/04/27 12:39:15 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(int **b, t_stack_info **stack_info_b)
{
	int	temp;

	if ((*stack_info_b)->len > 1)
	{
		temp = (*b)[(*stack_info_b)->top];
		(*b)[(*stack_info_b)->top] = (*b)[(*stack_info_b)->top - 1];
		(*b)[(*stack_info_b)->top - 1] = temp;
		ft_printf("sb\n");
	}
}

void	pb(int **b, int **a, t_stack_info **stack_info_b,
		t_stack_info **stack_info_a)
{
	if ((*stack_info_a)->len < 1)
		return ;
	(*stack_info_b)->top += 1;
	(*b)[(*stack_info_b)->top] = (*a)[(*stack_info_a)->top];
	(*stack_info_b)->len++;
	if ((*stack_info_a)->len > 1)
		(*stack_info_a)->top -= 1;
	(*stack_info_a)->len--;
}

void	rb(int **b, t_stack_info **stack_info_b)
{
	int	top_elem;
	int	i;
	int	j;

	if ((*stack_info_b)->len < 2)
		return ;
	top_elem = (*b)[(*stack_info_b)->top];
	i = (*stack_info_b)->top - 1;
	j = (*stack_info_b)->top;
	while (i >= 0)
	{
		(*b)[j] = (*b)[i];
		i--;
		j--;
	}
	(*b)[0] = top_elem;
}

void	rrb(int **b, t_stack_info **stack_info_b)
{
	int	last_elem;
	int	i;
	int	j;

	if ((*stack_info_b)->len < 2)
		return ;
	last_elem = (*b)[0];
	i = (*b)[0];
	j = (*b)[1];
	while (i < (*stack_info_b)->top)
	{
		(*b)[i] = (*b)[j];
		i++;
		j++;
	}
	(*b)[(*stack_info_b)->top] = last_elem;
	ft_printf("rra\n");
}
