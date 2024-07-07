/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ien-niou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+        */
/*   Created: 2024/06/27 13:22:07 by ien-niou          #+#    #+#             */
/*   Updated: 2024/06/27 14:00:00 by ien-niou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int *num, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(num[i] + '0');
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	num[10];
	int	i;

	if (n <= 0 || n > 10)
		return ;
	i = 0;
	while (i < n)
	{
		num[i] = i;
		i++;
	}
	while (1)
	{
		ft_print_number(num, n);
		if (num[0] == 10 - n)
			break ;
		ft_putchar(',');
		ft_putchar(' ');
		i = n - 1 ;
		while (i >= 0 && num[i] == 10 - n + i)
			i-- ;
		num[i]++;
		while (++i < n)
			num[i] = num[i - 1] + 1;
	}
}
