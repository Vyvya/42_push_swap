/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:05:09 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/15 14:50:34 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stack *stack)
{
	int	max_num;
	int	size;
	int	i;
	int	bottom;

	size = stack->a_len;
	max_num = size - 1;
	while ((max_num >> stack->max_bites) != 0)
		stack->max_bites++;
	while (stack->index < stack->max_bites)
	{
		i = 0;
		while (i < size)
		{
			bottom = stack->a_tail->value;
			if (((bottom >> stack->index) & 1) == 1)
				ra(stack);
			else
				pb(stack);
			i++;
		}
		stack->index++;
		while (stack->b_tail != 0)
			pa(stack);
	}	
}
