/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortXX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:52:24 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/07 19:23:34 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_me_back(t_stack **a, t_stack **b, int size)
{
	int	max;
	int	half;

	max = maxs(*b);
	half = stacksize(*b) / 2;
	while (stacksize(*b) != 0)
	{
		if (get_me_position(max, *b, half))
			topstack(a, b, &max);
		else
			bottomstack(a, b, &max);
		size = stacksize(*b);
		half = size / 2;
	}
}

void	sortall(t_stack **a, t_stack **b, int len)
{
	int	i;

	i = 1;
	while (stacksize(*a) > 0)
	{
		if ((*a)->index <= i)
		{
			push(b, a, 'b');
			i++;
		}
		else if ((*a)->index <= (i + len))
		{
			push(b, a, 'b');
			rotate(b, 'b');
			i++;
		}
		else
			rotate(a, 'a');
	}
	get_me_back(a, b, stacksize(*b));
}

void	sortx(t_stack **a, t_stack **b, int size)
{
	if (size <= 100)
		sortall(a, b, 10);
	else
		sortall(a, b, 30);
}
