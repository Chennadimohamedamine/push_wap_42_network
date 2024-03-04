/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 05:01:00 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/03 16:00:04 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				arg;
	int				index;
	struct s_list	*next;
}	t_stack;

int		check(int arc, char **arv);
int		checkdoublerepeat(char *s, char **av, int ac, int p);
int		repeate(int s, char **av, int ac, int j);
int		checkrepeate(int ac, char **av);
int		checkspace(char *str);
char	**splitspase(char *s, int *f);
char	*make_line(int ac, char **av);
size_t	ft_strlen(char *str);
int		freememory(int c, char **v, int s);
long	convertint(char *str);
int		error(int i);
int		countnumber(char *s);
t_stack	*create(int content, int i);
t_stack	*creatstack(int ac, char **av);
int		stacksize(t_stack *a);
void	pushstack(t_stack **lst, t_stack *new);
void	freeallstack(t_stack **a);
int		checksortstack(t_stack **a);
void	pushswap(t_stack **a, t_stack **b);
void	getmaxstack(t_stack *s);
int		maxs(t_stack *s);
int		get_me_position(int max, t_stack *b, int half);
void	bottomstack(t_stack **a, t_stack **b, int *max);
void	topstack(t_stack **a, t_stack **b, int *max);
void	sort3(t_stack **a, int size, int max);
void	sort5(t_stack **a, t_stack **b, int size);
void	sort4(t_stack **a, t_stack **b, int size);
void	sortx(t_stack **a, t_stack **b, int size);
void	swap(t_stack **a, char b);
void	push(t_stack **t, t_stack **d, char m);
void	swapall(t_stack **a, t_stack **b);
void	rotate(t_stack **lst, char b);
void	rotateall(t_stack **a, t_stack **b);
void	reverserotate(t_stack **s, int p);
void	reverseall(t_stack **a, t_stack **b);
t_stack	*laststack(t_stack *lst);
void	creatinback(t_stack **lst, t_stack *new);

#endif
