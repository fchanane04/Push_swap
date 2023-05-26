/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:55:10 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/17 20:09:28 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			write(1, &s[i++], 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) < *(s2 + i))
			return (-1);
		if (*(s1 + i) > *(s2 + i))
			return (1);
		i++;
	}
	if (*(s2 + i) != '\0')
		return (-1);
	return (0);
}

static int	ft_check_sign(int sign)
{
	if (sign == -1)
		return (0);
	return (-1);
}

long	ft_atoi(char *str)
{
	int			i;
	int			sign;
	long long	number;

	i = 0;
	sign = 1;
	number = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		if ((number * 10 + (str[i] - '0')) / 10 != number)
			return (ft_check_sign(sign));
		if (str[i] == '-' || str[i] == '+')
			return (number * sign);
		number = number * 10 + (str[i++] - 48);
	}
	return (number * sign);
}
