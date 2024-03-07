/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 02:46:33 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/08 00:49:58 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

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
void	swap(t_stack **a, char b);
void	push(t_stack **t, t_stack **d, char m);
void	swapall(t_stack **a, t_stack **b, char s);
void	rotate(t_stack **lst, char b);
void	rotateall(t_stack **a, t_stack **b, char s);
void	reverserotate(t_stack **s, int p);
void	reverseall(t_stack **a, t_stack **b, char s);
t_stack	*laststack(t_stack *lst);
void	creatinback(t_stack **lst, t_stack *new);
int		search(char *s);
char	*ft_strdup(char *s);
int		checknewline(char *s);
int		count_s(char *s, int f);
char	*join_line(char *s1, char *s2);
char	*get_next_line(int fd);
char	*freemery(char *f1, char *f2);
char	*ft_strjoin(char *s1, char *s2);
void	finition(t_stack **a, char *s1, char *s2, int i);
int		checkmoves(char *str);
void	runmoves(t_stack **a, t_stack **b, char *s);
int		ft_strcmp(char *s1, char *s2);
void	isemty(t_stack **a);
#endif
