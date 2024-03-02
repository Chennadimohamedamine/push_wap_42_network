/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 02:12:16 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/02 05:43:03 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swapall(stack **a, stack **b)
{
	write(1, "ss\n", 3);
	swap(a, 's');
	swap(b, 's');
}

void	rotateall(stack **a, stack **b)
{
	write(1, "rr\n", 3);
	rotate(a, 'r');
	rotate(b, 'r');
}

void	reverseall(stack **a, stack **b)
{
	reverserotate(a, 'd');
	reverserotate(b, 'd');
}
