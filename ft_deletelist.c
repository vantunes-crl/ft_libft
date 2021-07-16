#include "libft.h"

void	ft_deletelist(t_list **env)
{
	t_list	*current;
	t_list	*next;

	current = env;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*env = NULL;
}
