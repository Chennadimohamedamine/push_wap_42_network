/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 04:13:53 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/07 21:50:08 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	repeate(int s, char **av, int ac, int j)
{
	int	i;
	int	r;

	i = 1;
	r = 0;
	while (i < ac)
	{
		r = convertint(av[i]);
		if (r == s && j != i)
			return (1);
		i++;
	}
	return (0);
}

int	checkrepeate(int ac, char **av)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (av[i])
	{
		r = convertint(av[i]);
		if (repeate(r, av, ac, i))
			return (1);
		i++;
	}
	return (0);
}

int	checkargument(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	checker(int ac, char **av)
{
	int		i;
	long	r;
	char	*str;

	str = make_line(ac, av);
	av = splitspase(str, &ac);
	free(str);
	i = 0;
	while (av[i])
	{
		if (checkargument(av[i]))
			return (freememory(ac, av, 1));
		r = convertint(av[i]);
		if (r < -2147483648 || r > 2147483647)
			return (freememory(ac, av, 1));
		i++;
	}
	if (checkrepeate(ac, av))
		return (freememory(ac, av, 1));
	return (freememory(ac, av, 0));
}

int	check(int c, char **v)
{
	int	i;

	i = 1;
	while (i < c)
	{
		if (countnumber(v[i]) == 0)
			return (1);
		else if (checkspace(v[i]))
			return (1);
		i++;
	}
	if (checker(c, v))
		return (1);
	return (0);
}
