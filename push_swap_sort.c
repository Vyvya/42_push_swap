/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:40:40 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/15 17:42:25 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack *stack)
{
	if (check_if_sorted(stack) == 1)
		exit(0);
	else if (stack->a_len == 2)
		sort_two(stack);
	else if (stack->a_len == 3)
		sort_three(stack);
	else if (stack->a_len == 4)
		sort_four(stack);
	else if (stack->a_len == 5)
		sort_five(stack);
	else
		radix(stack);
}

void	simplify_stack(t_stack *stack)
{
	t_node	*temp_a;
	t_node	*temp_b;
	int		i;

	sort_copy_stack(stack);
	temp_b = stack->b_tail;
	i = 0;
	while (temp_b != NULL)
	{
		temp_a = stack->a_tail;
		while (temp_a != NULL)
		{
			if (temp_b->value == temp_a->nbr)
			{
				temp_a->value = i;
				i++;
				break ;
			}
			temp_a = temp_a->next;
		}
		temp_b = temp_b->next;
	}
	ft_free_stack(&stack->b_tail, &stack->b_head);
}

void	sort_copy_stack(t_stack *stack)
{
	int		i;
	int		j;
	t_node	*temp;

	i = stack->a_len + 1;
	copy_stack(stack);
	while (i > 0)
	{
		temp = stack->b_tail;
		while (temp->next != NULL)
		{
			j = 0;
			if (temp->value > temp->next->value)
			{
				j = temp->value;
				temp->value = temp->next->value;
				temp->next->value = j;
			}
			temp = temp->next;
		}
		i--;
	}
}

void	copy_stack(t_stack	*stack)
{
	t_node	*current;

	current = stack->a_tail->next;
	begin_stack(&stack->b_head, &stack->b_tail, stack->a_tail->value);
	while (current != NULL)
	{
		insert_end_stack(&stack->b_head, current->value);
		current = current->next;
	}
}
