/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:34:24 by vantunes          #+#    #+#             */
/*   Updated: 2021/02/16 11:37:13 by vantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		len;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = n * -1;
		sign = 1;
	}
	len = ft_lenofnum_bonus(n);
	str = (char *)malloc(sizeof(char ) * (len + sign + 1));
	if (!str)
		return (NULL);
	str[len + sign] = '\0';
	while (len-- > 0)
	{
		str[len + sign] = 48 + n % 10;
		n = n / 10;
	}
	if (sign == 1)
		str[len + sign] = '-';
	return (str);
}
