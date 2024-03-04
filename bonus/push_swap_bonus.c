/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 02:40:33 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/04 22:21:16 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	processmove(char *s, t_stack **a, t_stack **b)
{
	char	**str;
	int		i[2];

	str = splitspase(s, &i[0]);
	i[1] = 0;
	while (str[i[1]])
		runmoves(a, b, str[i[1]++]);
	if (checksortstack(a) && stacksize(*b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	freeallstack(b);
	freeallstack(a);
	freememory(i[0], str, 0);
	exit(0);
}

void	bonus_part(t_stack **a, t_stack **b)
{
	char	*str;
	char	*str1;

	str1 = NULL;
	while (1)
	{
		str = get_next_line(0);
		if (!str)
		{
			free(str);
			break ;
		}
		if (checkmoves(str))
			finition(a, str1, str, 1);
		str1 = ft_strjoin(str1, str);
		free(str);
	}
	processmove(str1, a, b);
	free(str1);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		return (0);
	if (check(ac, av))
		return (error(0));
	a = creatstack(ac, av);
	bonus_part(&a, &b);
	return (0);
}
