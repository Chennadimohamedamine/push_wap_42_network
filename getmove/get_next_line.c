/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:00:24 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/03 15:56:23 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

char	*get_line_newline(char *s)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(count_s(s, 1) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s && s[i])
	{
		if (s[i] == '\n')
		{
			str[i++] = '\n';
			break ;
		}
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*rest_line(char *s1)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (s1[i] && s1[i] != '\n')
		i++;
	if (s1[i] == 0)
		return (free(s1), NULL);
	j = 0;
	i++;
	while (s1[i + j])
		j++;
	str = malloc(j + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (s1[i])
		str[j++] = s1[i++];
	str[j] = 0;
	free(s1);
	return (str);
}

char	*read_line(int fd, char *rset)
{
	char	*buffer;
	int		r;
	char	*str;

	str = (char *)malloc((size_t)BUFFER_SIZE + 1);
	if (!str)
		return (NULL);
	r = 1;
	buffer = NULL;
	while (r > 0)
	{
		r = read(fd, str, BUFFER_SIZE);
		if (r < 0)
			return (freemery(str, buffer));
		str[r] = '\0';
		buffer = join_line(buffer, str);
		if (!buffer || buffer[0] == 0)
			return (freemery(str, buffer), rset);
		if (checknewline(buffer) || r == 0)
			break ;
	}
	free(str);
	str = join_line(rset, buffer);
	return (free(buffer), str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (BUFFER_SIZE < 0 || fd < 0 || read(fd, str, 0) < 0)
		return (NULL);
	line = NULL;
	str = read_line(fd, str);
	if (!str || str[0] == 0)
		return (freemery(str, NULL));
	line = get_line_newline(str);
	str = rest_line(str);
	return (line);
}
