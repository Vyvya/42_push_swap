/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:27:39 by vgejno            #+#    #+#             */
/*   Updated: 2022/10/07 11:13:06 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_all	*all;

	all = NULL;
	if (argc >= 2)
	{
		all = init(all);
		check_args(all, argc, argv);
	}
}

t_all	*init(t_all *all)
{
	all = malloc(sizeof(t_all));
	if (!all)
		return(NULL);
	all->a_len = 1;
	all->b_len = 1;
	all->index = 0;
	all->max_bites = 0;
	all->a_head = NULL;
	all->b_head = NULL;
	all->b_head = NULL;
	all->b_tail = NULL;
	return (all);
}

void	check_args(t_all *all, int argc, char **argv)
{
	int		i;
	char	**nbr;

	i = 0;
	while (argv[++i])
	{
		if (argc == 2)
		{
			nbr = ft_split(argv[i], ' '); // "3 4 2"
			split_to_all(all, nbr);
		}
	}
}

void	split_to_all(t_all *all, char **nbr)
{
	int	i;
	int	j;

	j = -1;
	i = 0;
	while (nbr[++j])
	{
		if (j == 0)
		{
			fill_all(&all->a_head,
				&all->a_tail, ft_atoi_check(digit[j]));
		}
	}
}