/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ien-niou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:17:39 by ien-niou          #+#    #+#             */
/*   Updated: 2024/07/06 11:29:10 by ien-niou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0 ;
	while (str[i])
		i++;
	return (i);
}

void	convert(unsigned int n, char *str)
{
	int		base_len;
	int		index;

	base_len = ft_strlen(str);
	if (n == 0) 
	{
		return ;
	}
	else
	{
		index = n % base_len;
		convert(n / base_len, str);
		ft_putchar(str[index]);
	}
}

int	ft_check(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	if (i >= 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;
	int				base_len;

	base_len = ft_strlen(base);
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -nbr;
	}
	else
	{
		nb = nbr;
	}
	if (ft_check(base) == 1)
	{
		convert(nb, base);
	}
}
