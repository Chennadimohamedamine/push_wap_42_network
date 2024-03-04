/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 02:46:33 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/03 23:20:02 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
#define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include "../push_swap.h"
#include <libc.h>

int		search(char *s);
char	*ft_strdup(char *s);
int		checknewline(char *s);
int		count_s(char *s, int f);
char	*join_line(char *s1, char *s2);
char	*get_next_line(int fd);
char	*freemery(char *f1, char *f2);
char	*ft_strjoin(char *s1, char *s2);

#endif