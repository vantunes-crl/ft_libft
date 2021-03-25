/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:23:52 by vantunes          #+#    #+#             */
/*   Updated: 2021/02/22 18:23:48 by vantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		i;
	size_t		j;
	size_t		lens;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	if (len > lens)
		len = lens;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j++] = s[i];
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
