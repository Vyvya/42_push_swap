/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:17:06 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/15 17:30:12 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *stack)
{
	sa(stack);
	exit(0);
}

void	sort_three(t_stack	*stack)
{
	int	top;
	int	middle;
	int	bottom;

	top = stack->a_head->value;
	bottom = stack->a_tail->value;
	middle = stack->a_tail->next->value;
	if (bottom > middle && middle < top && top > bottom)
		sa(stack);
	if (bottom > middle && top < bottom && middle > top)
	{
		sa(stack);
		rra(stack);
	}
	else if (bottom > middle && middle < top && top < bottom)
		ra(stack);
	else if (bottom < middle && middle > top && top > bottom)
	{
		sa(stack);
		ra(stack);
	}
	else if (middle > top && bottom < middle && top < bottom)
		rra(stack);
}

void	sort_four(t_stack *stack)
{
	while (stack->a_tail->value != 0)
		ra(stack);
	pb(stack);
	sort_three(stack);
	pa(stack);
}

void	sort_five(t_stack *stack)
{
	while (stack->a_tail->value == 2 || stack->a_tail->value == 3
		|| stack->a_tail->value == 4)
		ra(stack);
	pb(stack);
	while (stack->a_tail->value == 2 || stack->a_tail->value == 3
		|| stack->a_tail->value == 4)
		ra(stack);
	pb(stack);
	sort_three_of_five(stack);
	if (stack->b_tail->value < stack->b_tail->next->value)
		sb(stack);
	pa(stack);
	pa(stack);
}

void	sort_three_of_five(t_stack	*stack)
{
	int	first;
	int	second;
	int	third;

	first = stack->a_tail->value;
	second = stack->a_tail->next->value;
	third = stack->a_tail->next->next->value;
	if (first == 2 && second == 4 && third == 3)
	{	
		ra(stack);
		sa(stack);
		rra(stack);
	}
	if (first == 3 && second == 2 && third == 4)
		sa(stack);
	if (first == 3 && second == 4 && third == 2)
		rra(stack);
	if (first == 4 && second == 2 && third == 3)
		ra(stack);
	if (first == 4 && second == 3 && third == 2)
	{
		sa(stack);
		rra(stack);
	}				
}
