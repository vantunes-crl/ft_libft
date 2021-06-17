#include "libft.h"

void ft_deletelist(t_list **env)
{
    t_list *current = *env;
    t_list *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *env = NULL;
}