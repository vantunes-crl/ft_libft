/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:24:24 by vantunes          #+#    #+#             */
/*   Updated: 2021/02/17 15:24:31 by vantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*sorc;

	i = 0;
	dst = (unsigned char*)dest;
	sorc = (unsigned char *)src;
	while (i < n && sorc[i] != (unsigned char)c)
	{
		dst[i] = sorc[i];
		i++;
	}
	if (n == i)
		return (NULL);
	else
	{
		dst[i] = sorc[i];
		i++;
		return (&dst[i]);
	}
}
