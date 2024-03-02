#include "../push_swap.h"
void printstack(stack *a)
{
    stack *c;

    if (!a)
        return ;
    c = a;
    int i = 0;
    while (c)
    {
        printf("%d ===> %d\n",c->index,c->arg);
        c = c->next;
        i++;
    }
}
int getplace(stack *a,int index,int f)
{
    stack *i;
    int c;

    c = 0;
    i = a;
    if (f == 1)
    {
        while (i)
        {
            if(index > i->index)
                break ;
            c++;
            i = i->next;
        }
    }
    else
    {
        while (i)
        {
            if(index > i->index)
               break ;
            c++;
            i = i->next;
        }
    }
    return (c);
}
void sig(char *s)
{
    printf("%s",s);
}