/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:39:34 by vantunes          #+#    #+#             */
/*   Updated: 2021/02/16 11:42:35 by vantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*str;
	unsigned char			cc;
	int						i;

	str = (const unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (n)
	{
		if (str[i] == cc)
			return ((void *)&str[i]);
		i++;
		n--;
	}
	return (NULL);
}
