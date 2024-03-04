/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 02:12:16 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/04 20:31:29 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	reverseall(t_stack **a, t_stack **b,char s)
{
	if (s != 'n')
		write(1, "rrr\n", 3);
	reverserotate(a, 'd');
	reverserotate(b, 'd');
}
