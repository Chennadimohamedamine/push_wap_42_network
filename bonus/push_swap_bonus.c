/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 02:40:33 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/04 00:01:34 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
void leak()
{
	system("leaks checker");
}
void bonus_part(t_stack **a,t_stack **b)
{
	char *str;
	char *str1;
	a = NULL;
	b = NULL;
	str1 = NULL;
	while(1)
	{
    	str = get_next_line(0);
		if (!str)
		{
			free(str);
			break ;
		}
		str1 = ft_strjoin(str1,str);
		free(str);
	}
	printf("value %s\n",str1);
}
int main(int ac, char **av)
{
    t_stack	*a;
	t_stack	*b;

    if (ac == 1)
		return (0);
	if (check(ac, av))
		return (error(0));
	a = creatstack(ac, av);
    if (checksortstack(&a))
	{
		free(get_next_line(0));
		write(1,"ok\n",3);
		return (0);
	}
	bonus_part(&a,&b);
	atexit(leak);
    return (0);
}