/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 01:35:40 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/07 19:23:26 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_stack **a, int size, int max)
{
	if (size == 2)
		swap(a, 'a');
	if (size == 3)
	{
		if ((*a)->index == max)
			rotate(a, 'a');
		else if ((*a)->next->index == max)
			reverserotate(a, 'a');
		if ((*a)->arg > (*a)->next->arg)
			swap(a, 'a');
	}
}

void	sort4(t_stack **a, t_stack **b, int size)
{
	t_stack	*s;
	int		i;

	i = 0;
	s = *a;
	while (i < size)
	{
		if ((*a)->index < 2)
		{
			push(b, a, 'b');
			break ;
		}
		else
			reverserotate(a, 'a');
		i++;
	}
	sort3(a, 3, size);
	push(a, b, 'a');
}

void	sort5(t_stack **a, t_stack **b, int size)
{
	t_stack	*s;
	int		p[2];

	p[0] = 0;
	p[1] = 0;
	s = *a;
	while ((size - p[0]) > 3 && p[1] < size)
	{
		if ((*a)->index <= 2)
		{
			push(b, a, 'b');
			p[0]++;
		}
		else
			rotate(a, 'a');
		p[1]++;
	}
	sort3(a, size - 2, size);
	if ((*b)->index < (*b)->next->index)
		swap(b, 'b');
	push(a, b, 'a');
	push(a, b, 'a');
}
