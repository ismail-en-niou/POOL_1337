/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ien-niou <ien-niou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:01:49 by ien-niou          #+#    #+#             */
/*   Updated: 2024/07/14 17:50:07 by ien-niou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ints;
	int		size;
	int		i;

	size = max - min;
	if (size < 0)
		size = -size;
	ints = (int *)malloc(size * sizeof(int));
	if (!ints || size == 0 || max < min) 
		return (NULL);
	i = 0;
	while (min < max)
	{
		ints[i++] = min++;
	}
	return (ints);
}
