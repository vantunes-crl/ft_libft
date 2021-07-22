#include "libft.h"

void ft_freelst(t_list *elem)
{
    t_list *temp;

    while (elem)
    {
        temp = elem;
        elem = elem->next;
        free(temp->content);
        free(temp);
    }
}