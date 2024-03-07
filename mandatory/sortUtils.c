/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortUtils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:59:46 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/07 19:23:31 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_me_position(int max, t_stack *b, int half)
{
	int		i;
	t_stack	*b1;

	i = 0;
	b1 = b;
	while (i < half && b1)
	{
		if (b1->index == max)
			return (1);
		b1 = b1->next;
		i++;
	}
	return (0);
}

void	topstack(t_stack **a, t_stack **b, int *max)
{
	if ((*b)->index == *max)
	{
		push(a, b, 'a');
		*max -= 1;
	}
	else if ((*b)->next->index == *max)
	{
		swap(b, 'b');
		push(a, b, 'a');
		*max -= 1;
	}
	else
		rotate(b, 'b');
}

void	bottomstack(t_stack **a, t_stack **b, int *max)
{
	if ((*b)->index == *max)
	{
		push(a, b, 'a');
		reverserotate(b, 'b');
		*max -= 1;
	}
	else
		reverserotate(b, 'b');
}
