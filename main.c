/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:27:39 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/08 16:52:03 by vgejno           ###   ########.fr       */
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
		check_args(stack, argc, argv);
	}
}

t_stack	*init(t_stack *stack)
{
	stack = mstackoc(sizeof(t_stack));
	if (!stack)
		return(NULL);
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

void	check_args(t_stack *stack, int argc, char **argv)
{
	int		i;
	char	**nbr;

	i = 0;
	while (argv[++i])
	{
		if (argc == 2)
		{
			nbr = ft_split(argv[i], ' '); // "3 4 2"
			split_to_stack(stack, nbr);
		}
	}
}

void	split_to_stack(t_stack *stack, char **nbr)
{
	int	i;
	int	j;

	j = -1;
	i = 0;
	while (nbr[++j])
	{
		if (j == 0)
		{
			fill_stack(&stack->a_head,
				&stack->a_tail, ft_atoi_check(digit[j]));
		}
	}
}