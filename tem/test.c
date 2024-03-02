#include "push_swap.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
int rangemove(int x,int size,stack *a)
{
	stack *r;
	int i;

	i = 0;
	r = a;
	while(i < size)
	{
		// printf("range %d\n",i);
		// printf("range %d\n",r->index);
		if(x < r->index)
			return i;
		i++;
        r = r->next;
	}
	return i;
}
int main(int arc,char **arv)
{
    stack *a;
    a = creatStack(arc,arv);
    getMaxStack(a);
    printf("range %d\n",rangemove(20,20,a));
    printstack(a);
    return 0;
} 