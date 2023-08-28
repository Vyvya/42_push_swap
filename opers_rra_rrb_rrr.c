/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opers_rra_rrb_rrr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:57:03 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/15 16:43:25 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	insert_top_stack(&stack->a_tail, stack->a_head->value);
	stack->a_head = stack->a_head->prev;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack)
{
	insert_top_stack(&stack->b_tail, stack->b_head->value);
	stack->b_head = stack->b_head->prev;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack)
{
	insert_top_stack(&stack->a_tail, stack->a_head->value);
	stack->a_head = stack->a_head->prev;
	insert_top_stack(&stack->b_tail, stack->b_head->value);
	stack->b_head = stack->b_head->prev;
	write(1, "rrr\n", 4);
}
