/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortUtils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:59:46 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/02 06:03:59 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_me_position(int max, stack *b, int half)
{
	int		i;
	stack	*b1;

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

void	bottomstack(stack **a, stack **b, int *max)
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
