/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:00:54 by vantunes          #+#    #+#             */
/*   Updated: 2021/02/16 12:05:20 by vantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_cols(const char *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static	char	**clean_matriz(char const **dest, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dest[j]);
	}
	free(dest);
	return (NULL);
}

static	char	**create_matriz(const char *s, char **dest, char c, int lines)
{
	int i;
	int j;
	int k;

	j = 0;
	i = 0;
	while (s[i] != '\0' && j < lines)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dest[j] = (char *)malloc(sizeof(char) * count_cols(s, c, i) + 1);
		if (dest[j] == NULL)
			return (clean_matriz((char const **)dest, j));
		while (s[i] != '\0' && s[i] != c)
			dest[j][k++] = s[i++];
		dest[j][k] = '\0';
		j++;
	}
	dest[j] = 0;
	return (dest);
}

char			**ft_split(char const *s, char c)
{
	int		lines;
	char	**dest;

	if (s == NULL)
		return (NULL);
	lines = ft_countwords_bonus(s, c);
	dest = (char **)malloc(sizeof(char *) * (lines + 1));
	if (dest == NULL)
		return (NULL);
	return (create_matriz(s, dest, c, lines));
}
