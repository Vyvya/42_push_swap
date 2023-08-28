/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:27:39 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/15 17:48:14 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = NULL;
	if (argc >= 2)
	{
		stack = init(stack);
		check_args_fill_stack(stack, argv, argc);
		check_doubles(stack);
		simplify_stack(stack);
		push_swap(stack);
		sorted(stack);
	}
	else
		return (0);
	return (0);
}

t_stack	*init(t_stack *stack)
{
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->a_len = 1;
	stack->b_len = 1;
	stack->index = 0;
	stack->max_bites = 0;
	stack->a_head = NULL;
	stack->a_tail = NULL;
	stack->b_head = NULL;
	stack->b_tail = NULL;
	return (stack);
}

void	check_args_fill_stack(t_stack *stack, char **argv, int argc)
{
	int		i;
	char	**num;

	i = 0;
	while (argv[++i])
	{
		if (argc == 2)
		{
			num = ft_split(argv[i], ' ');
			split_to_stack(stack, num);
		}
		else
		{
			if (i == 1)
				begin_stack(&stack->a_head, &stack->a_tail,
					ft_atoi_check(argv[i]));
			else
				stack = fill_stack(stack, ft_atoi_check(argv[i]));
		}
	}
}

void	split_to_stack(t_stack *stack, char **num)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (num[++j])
	{
		if (j == 0)
		{
			begin_stack(&stack->a_head,
				&stack->a_tail, ft_atoi_check(num[j]));
		}
		else
			stack = fill_stack(stack, ft_atoi_check(num[j]));
	}
	while (num[i])
	{
		free(num[i]);
		i++;
	}
	free(num);
}

t_stack	*fill_stack(t_stack	*stack, int num)
{
	insert_end_stack(&stack->a_head, num);
	stack->a_len++;
	return (stack);
}
