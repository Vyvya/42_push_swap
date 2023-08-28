/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:38:01 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/15 16:41:24 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_sorted(t_stack *stack)
{
	t_node	*current;

	current = stack->a_tail;
	while (current->next)
	{
		if (current->value < current->next->value)
			current = current->next;
		else
			return (0);
	}
	return (1);
}

long long int	ft_atoi_check(char *str)
{
	int				i;
	int				sign;
	long long int	num;

	num = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		check_digit_error(str, i);
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0 || ft_strlen(str) > 12)
			error();
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	check_min_max(num, sign);
	return (num * sign);
}

void	check_digit_error(char *str, int i)
{
	if (ft_isdigit(str[i + 1]) == 0)
		error();
}

void	check_min_max(long long int num, int sign)
{
	if (((num * sign) > MAX_INT) || ((num * sign) < MIN_INT))
		error();
}

void	check_doubles(t_stack	*stack)
{
	t_node	*doub;
	t_node	*temp;

	doub = stack->a_tail;
	while (doub && doub->next)
	{
		temp = doub->next;
		while (temp != NULL)
		{
			if (doub->value == temp->value)
				error();
			temp = temp->next;
		}
		doub = doub->next;
	}
}
