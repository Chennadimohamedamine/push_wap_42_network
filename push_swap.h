/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 05:01:00 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/02 06:00:21 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <libc.h>

typedef struct s_list
{
    int             arg;
    int             index;
    struct s_list    *next;
} stack;

//!parssin 
int check(int arc,char **arv);
int checkdoublerepeat(char *s,char **av,int ac ,int p);
int repeate(int s,char **av ,int ac ,int j);
int checkrepeate(int ac,char **av);
// int checkSort(int ac,char **av);
int checkspace(char *str);

//! function 
char **splitspase(char *s, int *f);
char *make_line(int ac,char **av);
size_t	ft_strlen(char *str);
int freememory(int c,char **v,int s);
long convertint(char *str);
int error();
int countnumber(char *s);

//! stack 
stack    *create(int content,int i);
stack *creatstack(int ac,char **av);
int	stacksize(stack *a);
void  pushstack(stack **lst, stack *new);
void    freeallstack(stack **a);
int checksortstack(stack **a);
// void pushSwap(stack ***a,stack **b)
void pushswap(stack **a,stack **b);

// !alog 
void getmaxstack(stack *s);
int maxs(stack *s);
int	get_me_position(int max, stack *b, int half);
void	bottomstack(stack **a, stack **b, int *max);

// * sort
void sort3(stack **a,int size,int max);
void sort5(stack **a,stack **b,int size);
void sort4(stack **a,stack **b,int size);
void sortx(stack **a,stack **b,int size);

//! moves
void swap(stack **a,char b);
void push(stack **t,stack **d,char m);
void swapall(stack **a,stack **b);
void rotate(stack **lst,char b);
void rotateall(stack **a,stack **b);
void reverserotate(stack **s,int p);
void  reverseall(stack **a,stack **b);



stack    *laststack(stack *lst);
void	creatinback(stack **lst,stack *new);

#endif