/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 23:11:27 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/05 00:05:19 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

void	finition(t_stack **a, char *s1, char *s2, int i)
{
	if (s2 != NULL)
		free(s2);
	if (s1 != NULL)
		free(s1);
	freeallstack(a);
	write(2, "Error\n", 6);
	exit(i);
}

void	runmoves(t_stack **a, t_stack **b, char *s)
{
	if (!ft_strcmp("sa\n", s))
		swap(a, 'n');
	else if (!ft_strcmp("sb\n", s))
		swap(b, 'n');
	else if (!ft_strcmp("ss\n", s))
		swapall(a, b, 'n');
	else if (!ft_strcmp("pa\n", s))
		push(a, b, 'n');
	else if (!ft_strcmp("pb\n", s))
		push(b, a, 'n');
	else if (!ft_strcmp("ra\n", s))
		rotate(a, 'n');
	else if (!ft_strcmp("rb\n", s))
		rotate(b, 'n');
	else if (!ft_strcmp("rr\n", s))
		rotateall(a, b, 'n');
	else if (!ft_strcmp("rra\n", s))
		reverserotate(a, 'n');
	else if (!ft_strcmp("rrb\n", s))
		reverserotate(b, 'n');
	else if (!ft_strcmp("rrr\n", s))
		reverseall(a, b, 'n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	checkmoves(char *str)
{
	if (!ft_strcmp("sa\n", str) || !ft_strcmp("sb\n", str))
		return (0);
	else if (!ft_strcmp("pa\n", str) || !ft_strcmp("pb\n", str))
		return (0);
	else if (!ft_strcmp("ra\n", str) || !ft_strcmp("rb\n", str))
		return (0);
	else if (!ft_strcmp("ss\n", str) || !ft_strcmp("rr\n", str))
		return (0);
	else if (!ft_strcmp("rrr\n", str))
		return (0);
	else if (!ft_strcmp("rra\n", str) || !ft_strcmp("rrb\n", str))
		return (0);
	else
		return (1);
}

void	isemty(t_stack **a)
{
	if (checksortstack(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	freeallstack(a);
	exit(0);
}
