/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error_exit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:49:21 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/15 15:34:14 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit (0);
}

void	ft_free_stack(t_node **tail, t_node **head)
{
	t_node	*current;

	current = *tail;
	if (*tail == NULL)
		return ;
	while (current->next)
	{
		current = current->next;
		free(current->prev);
	}
	free(current);
	*tail = NULL;
	*head = NULL;
}

void	sorted(t_stack	*stack)
{
	int	i;

	i = 0;
	if (stack->a_tail)
		ft_free_stack(&stack->a_tail, &stack->a_head);
	if (stack->a_tail)
		ft_free_stack(&stack->b_tail, &stack->b_head);
	free(stack);
	stack = NULL;
}
