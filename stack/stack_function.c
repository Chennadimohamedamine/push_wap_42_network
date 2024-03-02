/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 02:48:47 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/02 05:31:20 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void  pushstack(stack **lst, stack *new)
{
    if(!new)
    {
        freeallstack(lst);
        exit(1);
    }    
    new->next = *lst;
    *lst = new;
}
stack    *create(int content,int i)
{
    stack   *new;
    
    new = (stack *)malloc(sizeof(stack));
    new -> arg = content;
    new -> next = NULL;
    new -> index = i;
    return (new);
}
stack *creatstack(int ac,char **av)
{
    stack *a;
    int i;
    char *s;

    a = NULL;
    s = make_line(ac,av);
    av = splitspase(s,&ac);
    free(s);
    i = ac;
    while(i)
    {
        pushstack(&a,create(convertint(av[i-1]),0));
        i--;  
    }
    freememory(ac,av,0);
    return (a);
}
int freememory(int c,char **v,int s)
{
    int i;
    
    i = 0;
    while(i < c)
    {
        free(v[i]);
        i++;
    }
    free(v);
    return (s);
}