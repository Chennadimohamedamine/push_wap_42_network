/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:41:15 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/04 20:32:51 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushswap(t_stack **a, t_stack **b)
{
	int	size;

	size = stacksize(*a);
	if (size <= 3)
		sort3(a, size, size);
	else if (size <= 4)
		sort4(a, b, size);
	else if (size <= 5)
		sort5(a, b, size);
	else
		sortx(a, b, size);
	freeallstack(a);
	freeallstack(b);
}

int	main(int arc, char **arv)
{
	t_stack	*a;
	t_stack	*b;

	if (arc == 1)
		return (0);
	if (check(arc, arv))
		return (error(0));
	a = creatstack(arc, arv);
	if (checksortstack(&a))
		return (0);
	b = NULL;
	getmaxstack(a);
	pushswap(&a, &b);
	return (0);
}
