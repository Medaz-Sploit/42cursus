/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midpoint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 13:25:24 by amaghat           #+#    #+#             */
/*   Updated: 2021/07/20 01:12:41 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_midpoint(t_pile *pile)
{
	int		part;
	int		*array;
	int		i;
	int		midpoint;
	t_pile	*tmp;

	i = 0;
	tmp = pile;
	part = pile->partition;
	array = (int *)malloc(sizeof(int) * ft_len_partition(pile));
	while (tmp && tmp->partition == part)
	{
		array[i++] = tmp->value;
		tmp = tmp->next;
	}
	bubble_sort(array, ft_len_partition(pile));
	midpoint = array[ft_len_partition(pile) / 2];
	free(array);
	return (midpoint);
}

void	ft_pushrot(t_state *state, int rot)
{
	int	midpoint;
	int	part;
	int	nra;

	part = state->stack_a->partition;
	while (!pile_is_sorted(state->stack_a)
		&& ft_len_partition(state->stack_a) > 2)
	{
		part++;
		nra = 0;
		midpoint = ft_find_midpoint(state->stack_a);
		while (ft_check_inf(state->stack_a, midpoint))
		{
			if (iter_atob(state, midpoint, part))
			{
				ra(state, 0);
				nra++;
			}
		}
		while (!rot && nra--)
			rra(state, 0);
	}
	if (!part_is_sorted(state->stack_a) && ft_len_partition(state->stack_a) == 2)
		sa(state, 0);
}

int	iter_atob(t_state *state, int midpoint, int part)
{
	if (state->stack_a->value < midpoint)
	{
		pb(state, 0);
		state->stack_b->partition = part;
		return (0);
	}
	return (1);
}
