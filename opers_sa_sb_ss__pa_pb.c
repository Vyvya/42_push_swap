/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opers_sa_sb_ss__pa_pb.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:20:59 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/15 16:44:41 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	t_node	*temp;
	int		i;
	int		j;

	temp = NULL;
	if ((stack->a_tail) && stack->a_tail->next)
	{
		temp = stack->a_tail;
		i = stack->a_tail->value;
		j = stack->a_tail->next->value;
		stack->a_tail->value = j;
		stack->a_tail->next->value = i;
	}
	write (1, "sa\n", 3);
}

void	sb(t_stack *stack)
{
	t_node	*temp;
	int		i;
	int		j;

	temp = NULL;
	if ((stack->b_tail) && stack->b_tail->next)
	{
		temp = stack->b_tail;
		i = stack->b_tail->value;
		j = stack->b_tail->next->value;
		stack->b_tail->value = j;
		stack->b_tail->next->value = i;
	}
	write (1, "sb\n", 3);
}

void	ss(t_stack *stack)
{
	t_node	*temp;
	int		i;
	int		j;

	temp = NULL;
	if ((stack->a_tail) && stack->a_tail->next)
	{
		temp = stack->a_tail;
		i = stack->a_tail->value;
		j = stack->a_tail->next->value;
		stack->a_tail->value = j;
		stack->a_tail->next->value = i;
	}
	temp = NULL;
	if ((stack->b_tail) && (stack->b_tail->next))
	{
		temp = stack->b_tail;
		i = stack->b_tail->value;
		j = stack->b_tail->next->value;
		stack->b_tail->value = j;
		stack->b_tail->next->value = i;
	}
	write (1, "ss\n", 3);
}

void	pa(t_stack *stack)
{
	t_node	*temp;

	temp = stack->b_tail;
	if (stack->b_tail == NULL)
		return ;
	if (stack->a_tail == NULL)
		begin_stack(&stack->a_head, &stack->a_tail, stack->b_tail->value);
	else
		insert_top_stack(&stack->a_tail, stack->b_tail->value);
	stack->b_tail = stack->b_tail->next;
	if (stack->b_tail == NULL)
		stack->b_head = NULL;
	remove_node(temp);
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack)
{
	t_node	*temp;

	temp = stack->a_tail;
	if (stack->a_tail == NULL)
		return ;
	if (stack->b_tail == NULL)
		begin_stack(&stack->b_head, &stack->b_tail, stack->a_tail->value);
	else
		insert_top_stack(&stack->b_tail, stack->a_tail->value);
	stack->a_tail = stack->a_tail->next;
	if (stack->a_tail == NULL)
		stack->a_head = NULL;
	remove_node(temp);
	write(1, "pb\n", 3);
}
