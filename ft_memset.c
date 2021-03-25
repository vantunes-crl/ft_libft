/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:51:07 by vantunes          #+#    #+#             */
/*   Updated: 2021/02/16 11:52:34 by vantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	int				i;
	unsigned char	*dst;

	dst = (unsigned char *)dest;
	i = 0;
	if (len > 0)
	{
		while (len > 0)
		{
			dst[i] = (unsigned char)c;
			len--;
			i++;
		}
	}
	return (dest);
}
