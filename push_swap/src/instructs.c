/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 04:01:34 by amaghat           #+#    #+#             */
/*   Updated: 2021/07/21 00:22:20 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_state *state, int check)
{
	int	tmp;

	if (state->stack_a && state->stack_a->next)
	{
		tmp = state->stack_a->value;
		state->stack_a->value = state->stack_a->next->value;
		state->stack_a->next->value = tmp;
	}
	if (!check)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_state *state, int check)
{
	int	tmp;

	if (state->stack_b && state->stack_b->next)
	{
		tmp = state->stack_b->value;
		state->stack_b->value = state->stack_b->next->value;
		state->stack_b->next->value = tmp;
	}
	if (!check)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_state *state, int check)
{
	sa(state, 1);
	sb(state, 1);
	if (!check)
		ft_putstr_fd("ss\n", 1);
}

void	pa(t_state *state, int check)
{
	t_pile	*tmp;

	if (!state->stack_b)
		return ;
	tmp = state->stack_b;
	state->stack_b = state->stack_b->next;
	tmp->next = state->stack_a;
	state->stack_a = tmp;
	if (!check)
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_state *state, int check)
{
	t_pile	*tmp;

	if (!state->stack_a)
		return ;
	tmp = state->stack_a;
	state->stack_a = state->stack_a->next;
	tmp->next = state->stack_b;
	state->stack_b = tmp;
	if (!check)
		ft_putstr_fd("pb\n", 1);
}
