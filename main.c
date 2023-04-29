/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:45:57 by crepou            #+#    #+#             */
/*   Updated: 2023/04/27 19:16:09 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_arguments(char *argv[], int argc, char ***args)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		(*args) = ft_split(argv[1], ' ');
		while ((*args)[i])
		{
			i++;
		}
		return (i);
	}
	(*args) = NULL;
	return (argc - 1);
}

int	ft_initialize(int **a, t_stack_info **stack_info_a, char *argv[], int argc)
{
	char	**args;
	int		number_of_args;
	int		i;
	int		j;

	number_of_args = ft_get_arguments(argv, argc, &args);
	(*a) = (int *)malloc(sizeof(int) * number_of_args);
	i = number_of_args - 1;
	j = 0;
	while (i >= 0)
	{
		if (wrong_arg(j, args, argv))
			return (-1);
		if (args != NULL)
			(*a)[i] = ft_atoi(args[j]);
		else
			(*a)[i] = ft_atoi(argv[j + 1]);
		i--;
		j++;
	}
	(*stack_info_a)->len = number_of_args;
	(*stack_info_a)->size = number_of_args;
	(*stack_info_a)->top = number_of_args;
	return (number_of_args);
}

int	main(int argc, char *argv[])
{
	int				*stack_a;
	t_stack_info	*stack_a_info;
	int				i;
	int				num_of_args;

	if (argc > 1)
	{
		i = 0;
		stack_a_info = (t_stack_info *)malloc(sizeof(t_stack_info));
		num_of_args = ft_initialize(&stack_a, &stack_a_info, argv, argc);
		if (num_of_args < 0)
		{
			ft_printf("wrong argument!\n");
			return (-1);
		}
		//push_swap(stack_a, stack_a_info, num_of_args);
	}
	return (0);
}
