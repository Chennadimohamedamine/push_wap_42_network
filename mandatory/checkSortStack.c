/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkSortStack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:48:00 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/07 19:23:09 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_stack(t_stack *s, int r)
{
	t_stack	*c;

	c = s;
	while (c)
	{
		if (c->arg > r)
			return (1);
		if (r == c->arg)
			break ;
		c = c->next;
	}
	while (c)
	{
		if (c->arg < r)
			return (1);
		c = c->next;
	}
	return (0);
}

int	checksortstack(t_stack **a)
{
	t_stack	*v;
	int		r;

	v = *a;
	while (v)
	{
		r = v->arg;
		if (check_sort_stack(v, r))
			return (0);
		v = v->next;
	}
	freeallstack(a);
	return (1);
}

int	error(int i)
{
	write(2, "Error\n", 6);
	return (i);
}

int	checkspace(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (1);
	while (str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (1);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (0);
		i++;
	}
	return (1);
}
