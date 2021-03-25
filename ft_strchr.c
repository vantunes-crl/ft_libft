/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:05:51 by vantunes          #+#    #+#             */
/*   Updated: 2021/02/16 12:06:55 by vantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *)s;
	while (new[i])
	{
		if (new[i] == (char)c)
			return (&new[i]);
		i++;
	}
	if (new[i] == '\0' && (char)c == '\0')
		return (&new[i]);
	return (NULL);
}
