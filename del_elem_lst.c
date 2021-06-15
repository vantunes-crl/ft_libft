#include "libft.h"

void del_elem_lst(t_list **lst, char *key)
{
    t_list *prev;
    t_list *temp = *lst;

    if (temp != NULL && ft_strncmp(temp->content, key, ft_strlen(key) == 0))
    {
        *lst = temp->next;
        free(temp);
        return ;
    }
    while (temp != NULL && ft_strncmp(temp->content, key, ft_strlen(key)))
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return ;
    prev->next = temp->next;
    free(temp);
}