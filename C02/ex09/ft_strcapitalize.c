/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ien-niou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:11:02 by ien-niou          #+#    #+#             */
/*   Updated: 2024/07/01 19:46:45 by ien-niou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i ;
	int		flag;

	i = 0 ;
	flag = 1 ;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 1)
				str[i] -= 32;
			flag = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			flag = 0 ;
		}
		else
			flag = 1 ;
		i++;
	}
	return (str);
}
