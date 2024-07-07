/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ien-niou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:39:06 by ien-niou          #+#    #+#             */
/*   Updated: 2024/07/06 13:39:09 by ien-niou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	convert(int i, char *s)
{
	int		res;

	res = 0 ;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = 10 * res ;
		res = res + (s[i] - '0');
		i++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int		i;
	int		count;
	int		res;

	res = 0;
	i = 0;
	count = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count *= -1 ;
		i++;
	}
	res = convert(i, str);
	return (res * count);
}
