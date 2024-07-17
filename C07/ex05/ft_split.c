/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ien-niou <ien-niou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:34:34 by ien-niou          #+#    #+#             */
/*   Updated: 2024/07/15 10:55:06 by ien-niou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i]) 
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src, char *sep)
{
	int	i;

	i = 0 ;
	while (src[i] && !is_separator(src[i], sep))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count_word(char *str, char *sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i]) 
	{
		while (str[i] && is_separator(str[i], sep))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && !is_separator(str[i], sep))
			i++;
	}
	return (count);
}

int	ft_strlen(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && !is_separator(str[i], sep))
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**res;

	i = 0;
	j = 0;
	res = malloc((count_word(str, charset) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		if (str[i])
		{
			res[j] = malloc(ft_strlen(&str[i], charset) + 1);
			ft_strcpy(res[j], &str[i], charset);
			j++;
			while (str[i] && !is_separator(str[i], charset))
				i++;
		}
	}
	res[j] = (NULL);
	return (res);
}
