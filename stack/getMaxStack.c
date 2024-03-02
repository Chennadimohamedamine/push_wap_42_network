/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getMaxStack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 02:09:35 by mochenna          #+#    #+#             */
/*   Updated: 2024/03/02 05:35:42 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
int searchmax(stack *s,int r)
{
    if(!s)
        return 0;
    while(s)
    {
        if (r < s->arg && s->index == 0)
            return (0);
        s = s->next;   
    }
    return (1);
}
void getmaxstack(stack *s)
{
    stack *m;
    int    r[3];
    int j = 0;

    if(!s)
        return ;
    r[0] = 0;
    m = s;
    r[1] = stacksize(m);
    r[2] = r[1];
    while(j != r[2])
    {
        r[0] = m->arg;
        if(searchmax(s,r[0]) && m->index == 0)
        {
            m->index = r[1]--;
            j = -1;
            m = s;
        }
        else
          m = m->next;
        j++;
    }
}
int search_max(stack *s,int r ,int i)
{
    stack *m;

    m = s;
    if(!s)
        return 0;
    if( i == 1)
    {
        while(m)
        {
            if (r < m->arg)
                return (0);
            m = m->next;   
        }
    }
    else
    {
        while(m)
        {
            if (r > m->arg)
                return (0);
            m = m->next;   
        }
    } 
    return (1);
}
int maxs(stack *s)
{
    stack *m;
    int    r[3];
    int j = 0;

    r[0] = 0;
    m = s;
    r[1] = stacksize(m);
    r[2] = r[1];
    while(j != r[2])
    {
        r[0] = m->arg;
        if(search_max(s,r[0],1))
            break;
        else
          m = m->next;
        j++;
    }
    return (m->index);
}