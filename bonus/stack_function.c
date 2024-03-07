/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:59:20 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/08 00:51:00 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pushstack(t_stack **lst, t_stack *new)
{
	if (!new)
	{
		freeallstack(lst);
		exit(1);
	}
	new->next = *lst;
	*lst = new;
}

t_stack	*create(int content, int i)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new -> arg = content;
	new -> next = NULL;
	new -> index = i;
	return (new);
}

t_stack	*creatstack(int ac, char **av)
{
	t_stack	*a;
	int		i;
	char	*s;

	a = NULL;
	s = make_line(ac, av);
	av = splitspase(s, &ac);
	free(s);
	i = ac;
	while (i)
	{
		pushstack(&a, create(convertint(av[i - 1]), 0));
		i--;
	}
	freememory(ac, av, 0);
	return (a);
}

int	freememory(int c, char **v, int s)
{
	int	i;

	i = 0;
	while (i < c)
	{
		free(v[i]);
		i++;
	}
	free(v);
	return (s);
}
