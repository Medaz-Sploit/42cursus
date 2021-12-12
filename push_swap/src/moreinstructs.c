/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moreinstructs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 04:01:29 by amaghat           #+#    #+#             */
/*   Updated: 2021/07/21 00:23:11 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_state *state, int check)
{
	t_pile	*tmp;
	t_pile	*first;

	if (state->stack_a && state->stack_a->next)
	{
		first = state->stack_a;
		state->stack_a = state->stack_a->next;
		tmp = first;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = first;
		tmp->next->next = NULL;
	}
	if (!check)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_state *state, int check)
{
	t_pile	*tmp;
	t_pile	*first;

	if (state->stack_b && state->stack_b->next)
	{
		first = state->stack_b;
		state->stack_b = state->stack_b->next;
		tmp = first;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = first;
		tmp->next->next = NULL;
	}
	if (!check)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_state *state, int check)
{
	ra(state, 1);
	rb(state, 1);
	if (!check)
		ft_putstr_fd("rr\n", 1);
}

void	rra(t_state *state, int check)
{
	t_pile	*tmp;
	t_pile	*last;

	if (state->stack_a && state->stack_a->next)
	{
		tmp = state->stack_a;
		while (tmp->next->next)
			tmp = tmp->next;
		last = tmp->next;
		tmp->next = NULL;
		last->next = state->stack_a;
		state->stack_a = last;
	}
	if (!check)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_state *state, int check)
{
	t_pile	*tmp;
	t_pile	*last;

	if (state->stack_b && state->stack_b->next)
	{
		tmp = state->stack_b;
		while (tmp->next->next)
			tmp = tmp->next;
		last = tmp->next;
		tmp->next = NULL;
		last->next = state->stack_b;
		state->stack_b = last;
	}
	if (!check)
		ft_putstr_fd("rrb\n", 1);
}
