/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:22:13 by vantunes          #+#    #+#             */
/*   Updated: 2021/02/16 12:23:06 by vantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_cmp(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	int		i;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && ft_cmp(s1[start], set) == 1)
		start++;
	while (end > start && ft_cmp(s1[end - 1], set) == 1)
		end--;
	cpy = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!cpy)
		return (NULL);
	while (start < end)
	{
		cpy[i] = s1[start];
		i++;
		start++;
	}
	cpy[i] = '\0';
	return (cpy);
}
