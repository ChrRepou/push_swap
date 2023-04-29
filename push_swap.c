/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:48:47 by crepou            #+#    #+#             */
/*   Updated: 2023/04/29 15:48:22 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int *a, t_stack_info *stack_info_a, int args)
{
	int				*b;
	t_stack_info	*stack_info_b;

	if (is_sorted(a))
		return (1);
	b = (int *)malloc(sizeof(int) * stack_info_a->size);
	stack_info_b = (t_stack_info *)malloc(sizeof(stack_info_a));
	stack_info_b->len = 0;
	stack_info_b->size = stack_info_a->size;
	stack_info_b->top = 0;
	return (0);
}
