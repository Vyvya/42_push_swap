/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:02:12 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/15 16:40:47 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	int				nbr;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	int		value;
	int		index;
	int		max_bites;
	int		a_len;
	int		b_len;
	t_node	*a_head;
	t_node	*a_tail;
	t_node	*b_head;
	t_node	*b_tail;
}	t_stack;

# define MIN_INT -2147483648
# define MAX_INT 2147483647

t_stack			*init(t_stack *stack);
void			check_args_fill_stack(t_stack *stack, char **argv, int argc);
void			split_to_stack(t_stack *stack, char **nbr);

void			begin_stack(t_node **head, t_node **tail, int value);
void			insert_top_stack(t_node **tail, int value);
void			insert_end_stack(t_node **head, int value);
t_stack			*fill_stack(t_stack	*stack, int num);

long long int	ft_atoi_check(char *str);
void			check_digit_error(char *str, int i);
void			check_min_max(long long int nbr, int sign);
void			check_doubles(t_stack	*stack);
int				check_if_sorted(t_stack *stack);

void			simplify_stack(t_stack *stack);
void			sort_copy_stack(t_stack *stack);
void			copy_stack(t_stack	*stack);
void			remove_node(t_node *node);
void			push_swap(t_stack *stack);

void			sort_two(t_stack *stack);
void			sort_three(t_stack	*stack);
void			sort_four(t_stack *stack);
void			sort_five(t_stack *stack);
void			sort_three_of_five(t_stack	*stack);
void			radix(t_stack *stack);

void			sa(t_stack *stack);
void			sb(t_stack *stack);
void			ss(t_stack *stack);
void			pa(t_stack *stack);
void			pb(t_stack *stack);
void			ra(t_stack *stack);
void			rb(t_stack *stack);
void			rr(t_stack *stack);
void			rra(t_stack *stack);
void			rrb(t_stack *stack);
void			rrr(t_stack *stack);

void			error(void);
void			ft_free_stack(t_node **tail, t_node **head);
void			sorted(t_stack	*stack);

#endif
