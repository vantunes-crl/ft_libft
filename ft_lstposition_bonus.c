/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstposition.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:13:49 by vantunes          #+#    #+#             */
/*   Updated: 2021/02/22 16:15:54 by vantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstposition(t_list *lst, int p)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		if (p == i)
			return (lst->content);
		i++;
	}
	return (lst->content);
}
