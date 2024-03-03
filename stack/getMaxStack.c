/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getMaxStack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 02:09:35 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/03 00:45:39 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	searchmax(t_stack *s, int r)
{
	if (!s)
		return (0);
	while (s)
	{
		if (r < s->arg && s->index == 0)
			return (0);
		s = s->next;
	}
	return (1);
}

void	getmaxstack(t_stack *s)
{
	t_stack	*m;
	int		r[3];
	int		j;

	if (!s)
		return ;
	r[0] = 0;
	m = s;
	j = 0;
	r[1] = stacksize(m);
	r[2] = r[1];
	while (j != r[2])
	{
		r[0] = m->arg;
		if (searchmax(s, r[0]) && m->index == 0)
		{
			m->index = r[1]--;
			j = -1;
			m = s;
		}
		else
			m = m->next;
		j++;
	}
}

int	search_max(t_stack *s, int r)
{
	t_stack	*m;

	m = s;
	if (!s)
		return (0);
	while (m)
	{
		if (r < m->arg)
			return (0);
		m = m->next;
	}
	return (1);
}

int	maxs(t_stack *s)
{
	t_stack	*m;
	int		r[3];
	int		j;

	r[0] = 0;
	m = s;
	j = 0;
	r[1] = stacksize(m);
	r[2] = r[1];
	while (j != r[2])
	{
		r[0] = m->arg;
		if (search_max(s, r[0]))
			break ;
		else
			m = m->next;
		j++;
	}
	return (m->index);
}
