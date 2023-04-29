/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:03:26 by crepou            #+#    #+#             */
/*   Updated: 2023/04/29 17:12:33 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./printf/libft/libft.h"
# include "printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct stack_element
{
	int						val;
	struct stack_element	*prev;
	struct stack_element	*next;
}							t_stack_element;

typedef struct stack_info
{
	int						top;
	int						len;
	int						size;
}							t_stack_info;

int							stack_len(int *stack);
void						sa(int **a, t_stack_info **stack_info_a);
void						pa(int **a, int **b, t_stack_info **stack_info_a,
								t_stack_info **stack_info_b);
void						ra(int **a, t_stack_info **stack_info_a);
void						rra(int **a, t_stack_info **stack_info_a);
void						sb(int **b, t_stack_info **stack_info_b);
void						pb(int **b, int **a, t_stack_info **stack_info_b,
								t_stack_info **stack_info_a);
void						rb(int **b, t_stack_info **stack_info_b);
void						rrb(int **b, t_stack_info **stack_info_b);
void						ss(int **a, int **b, t_stack_info **stack_info_a,
								t_stack_info **stack_info_b);
void						rr(int **a, int **b, t_stack_info **stack_info_a,
								t_stack_info **stack_info_b);
void						rrr(int **a, int **b, t_stack_info **stack_info_a,
								t_stack_info **stack_info_b);
int							ft_initialize(int **a, t_stack_info **stack_info_a,
								char *argv[], int argc);
int							ft_get_arguments(char *argv[], int argc,
								char ***args);
int							is_a_number(char *str);
long long					ft_atol(const char *str);
int							is_an_integer(char *str);
int							error_check(char *str);
int							wrong_arg(int j, char **args, char *argv[]);
int							is_sorted(int *a);
void						small_sort(int **stack_a,
								t_stack_info *stack_a_info);
void						sort_3(int **stack_a, t_stack_info **stack_a_info);
#endif
