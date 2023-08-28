/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opers_ra_rb_rr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:33:16 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/15 15:13:30 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	t_node	*temp;

	temp = stack->a_tail;
	insert_end_stack(&stack->a_head, stack->a_tail->value);
	stack->a_tail = stack->a_tail->next;
	remove_node(temp);
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack)
{
	t_node	*temp;

	temp = stack->b_tail;
	insert_end_stack(&stack->b_head, stack->b_tail->value);
	stack->b_tail = stack->b_tail->next;
	remove_node(temp);
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack)
{
	t_node	*temp;

	temp = stack->a_tail;
	insert_end_stack(&stack->a_head, stack->a_tail->value);
	stack->a_tail = stack->a_tail->next;
	remove_node(temp);
	temp = stack->b_tail;
	insert_end_stack(&stack->b_head, stack->b_tail->value);
	stack->b_tail = stack->b_tail->next;
	remove_node(temp);
	write(1, "rr\n", 3);
}
