/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_handling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 00:14:39 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/18 18:58:40 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	check_list_is_sorted(t_number *stack)
{
	if (stack && list_is_sorted(stack))
		exit(0);
}

void	error_msg(void)
{
	write(2, "Error\n", sizeof("Error\n"));
	exit(1);
}

void	is_empty(char **argv, int argc)
{
	int	i;

	i = 0;
	if (argc < 2)
		exit(0);
	while (argv[i])
	{
		if (!ft_strcmp(argv[i], ""))
			error_msg();
		i++;
	}
}

void	is_list_full_of_numbers(int argc, char **argv)
{
	int		i;
	int		j;
	long	check;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
		{
			if (ft_strlen(argv[i]) < 2)
				error_msg();
			j++;
		}
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				error_msg();
			j++;
		}
		check = ft_atoi(argv[i]);
		if (check > 2147483647 || check < -2147483648)
			error_msg();
		i++;
	}
}

void	numbers_are_not_dup(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				write(2, "Error\n", sizeof("Error\n"));
				exit(1);
			}
			j++;
		}
		i++;
	}
}
