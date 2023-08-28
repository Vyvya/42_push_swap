/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:57:38 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/15 16:47:11 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	begin_stack(t_node **head, t_node **tail, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		error();
	new_node->value = value;
	new_node->nbr = value;
	new_node->next = NULL;
	new_node->prev = NULL;
	*head = new_node;
	*tail = new_node;
}

void	insert_top_stack(t_node **tail, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		error();
	new_node->value = value;
	new_node->nbr = value;
	new_node->prev = NULL;
	new_node->next = *tail;
	(*tail)->prev = new_node;
	*tail = new_node;
}

void	insert_end_stack(t_node **head, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		error();
	new_node->value = value;
	new_node->nbr = value;
	new_node->next = NULL;
	new_node->prev = *head;
	(*head)->next = new_node;
	*head = new_node;
}

void	remove_node(t_node *node)
{
	if (node->prev != NULL)
	{
		node->prev->next = node->prev;
	}
	if (node->next != NULL)
	{
		node->next->prev = node->prev;
	}
	free(node);
	node = NULL;
}
