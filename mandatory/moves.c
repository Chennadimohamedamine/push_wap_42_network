/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 03:03:37 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/07 19:23:18 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **a, char b)
{
	int		tem;
	int		index;

	if (!(*a) || !(*a)->next)
		return ;
	tem = (*a)->arg;
	index = (*a)->index;
	(*a)->arg = (*a)->next->arg;
	(*a)->next->arg = tem;
	(*a)->index = (*a)->next->index;
	(*a)->next->index = index;
	if (b == 'a')
		write(1, "sa\n", 3);
	else if (b == 'b')
		write(1, "sb\n", 3);
}

void	push(t_stack **t, t_stack **d, char m)
{
	int		r;
	t_stack	*tem;

	if (!(*d))
		return ;
	r = (*d)->arg;
	tem = NULL;
	tem = (*d)->next;
	pushstack(t, create(r, (*d)->index));
	free(*d);
	*d = tem;
	if (m == 'a')
		write(1, "pa\n", 3);
	else if (m == 'b')
		write(1, "pb\n", 3);
}

void	rotate(t_stack **lst, char b)
{
	t_stack	*last;

	if (!(*lst) || !(*lst)->next)
		return ;
	creatinback(lst, create((*lst)->arg, (*lst)->index));
	last = (*lst)->next;
	free(*lst);
	*lst = last;
	if (b == 'a')
		write(1, "ra\n", 3);
	else if (b == 'b')
		write(1, "rb\n", 3);
}

void	reverserotate(t_stack **s, int p)
{
	t_stack	*a;
	t_stack	*temp;
	int		i[2];

	if (!(*s) || !(*s)->next)
		return ;
	temp = laststack(*s);
	i[0] = temp->index;
	i[1] = temp->arg;
	temp = *s;
	while (temp->next != NULL)
	{
		a = temp;
		temp = temp->next;
	}
	a->next = NULL;
	pushstack(s, create(i[1], i[0]));
	free(temp);
	temp = NULL;
	if (p == 'a')
		write(1, "rra\n", 4);
	if (p == 'b')
		write(1, "rrb\n", 4);
}
