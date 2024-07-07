/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ien-niou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:41:27 by ien-niou          #+#    #+#             */
/*   Updated: 2024/07/03 12:08:39 by ien-niou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	int		i;

	i = 0 ;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	d;
	unsigned int	i;
	unsigned int	res;

	s = ft_strlen(src);
	d = ft_strlen(dest);
	i = 0;
	res = 0 ;
	if (size > d)
		res = (d + s);
	else
		res = (s + size);
	if (size == 0)
		return (res);
	while (src[i] && (d + i) < size - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0' ;
	return (res);
}
