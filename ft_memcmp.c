/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:44:14 by vantunes          #+#    #+#             */
/*   Updated: 2021/02/16 11:45:30 by vantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*st1;
	unsigned char		*st2;
	int					i;

	if (n == 0)
		return (0);
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	i = 0;
	while (n != 0)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
		n--;
	}
	return (0);
}
