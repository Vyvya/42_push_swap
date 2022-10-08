/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:02:12 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/08 16:51:13 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <42_libft/libft/libft.h>

/*struct of double connected lists, circular connected lists*/
typedef struct s_node
{
	int	num;	/*index not sorted*/
	int	index;	/*index sorted*/
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

/*struct of *stack a et stack b, which are double connected list*/
typedef struct s_stack
{
	t_node	*a_head;
	t_node	*a_tail;
	t_node	*b_head;
	t_node	*b_tail;
	int		index;
	int		value;
	int		max_bites;
	int		a_len; /*length of circular connected lists*/
	int		b_len;
}	t_stack;

# define MIN_INT -2147483648
# define MAX_INT 2147483647

//operations

t_stack			*init(t_stack *stack);
void			check_args(t_stack *stack, int argc, char **argv);
void			split_to_stack(t_stack *stack, char **nbr);
void			fill_stack(t_node **head, t_node **tail, int value);
long long int	ft_atoi_check(char *str);

void			error(void);

# endif
