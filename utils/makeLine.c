/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makeLine.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:11:35 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/02 05:29:10 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strdup(char *s1)
{
	char	*cpy;
	int		l;
	int		i;

	l = ft_strlen(s1);
	i = 0;
	cpy = (char *)malloc(sizeof(char) * l + 1);
	if (cpy == NULL)
		return (NULL);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
char	*ft_strjoin(char *s1, char *s2)
{
	char	*s;
	int		i;
	int j = 0;


	if (!s1)
		return (ft_strdup(s2));
	i = 0;
	j = 0;
	s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!s)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[i++] = ' ';
	while (s2[j])
		s[i++] = s2[j++];
    s[i] = 0;
	return (free(s1),s);
}
char *make_line(int ac,char **av)
{
    int i = 1;
	char *s;

    s = NULL;
    while (i < ac)
    {
            s = ft_strjoin(s,av[i]);
            if(!s)
            {
                freememory(i,av,0);
                return (NULL);
            }
        i++;
    }
    return (s);
}
