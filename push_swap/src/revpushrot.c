/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revpushrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:06:24 by aabounak          #+#    #+#             */
/*   Updated: 2021/07/20 01:12:41 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	finish_shunk(t_state *state, t_pile *tmp)
{
	if (tmp->next && tmp->value < tmp->next->value)
		sb(state, 0);
	pa(state, 0);
	pa(state, 0);
}

void	iter_btoa(t_state *state)
{
	int	midpoint;
	int	nrb;

	nrb = 0;
	midpoint = ft_find_midpoint(state->stack_b);
	while (ft_check_sup(state->stack_b, midpoint))
	{
		if (state->stack_b->value > midpoint)
		{
			pa(state, 0);
			state->stack_a->partition++;
			state->stack_a->partition++;
		}
		else
		{
			rb(state, 0);
			nrb++;
		}
	}
	while (nrb--)
		rrb(state, 0);
	ft_pushrot(state, 0);
}

void	ft_rev_pushrot(t_state *state)
{
	t_pile	*tmp;
	int		part;

	tmp = state->stack_b;
	part = tmp->partition;
	while (tmp && tmp->partition == part)
	{
		if (ft_len_partition(state->stack_b) == 1)
		{
			pa(state, 0);
			tmp = state->stack_b;
		}
		else if (ft_len_partition(state->stack_b) == 2)
		{
			finish_shunk(state, tmp);
			tmp = state->stack_b;
		}
		else
		{
			iter_btoa(state);
			tmp = state->stack_b;
		}
		if (tmp)
			tmp = tmp->next;
	}
}
