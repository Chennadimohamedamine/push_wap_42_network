/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:02:40 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/08 00:49:29 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swapall(t_stack **a, t_stack **b, char s)
{
	if (s != 'n')
		write(1, "ss\n", 3);
	swap(a, 's');
	swap(b, 's');
}

void	rotateall(t_stack **a, t_stack **b, char s)
{
	if (s != 'n')
		write(1, "rr\n", 3);
	rotate(a, 'r');
	rotate(b, 'r');
}

void	reverseall(t_stack **a, t_stack **b, char s)
{
	if (s != 'n')
		write(1, "rrr\n", 3);
	reverserotate(a, 'd');
	reverserotate(b, 'd');
}
