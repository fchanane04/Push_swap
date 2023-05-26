/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   managing_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:24:19 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/18 18:59:10 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	fill_in_list(t_number **lst, int argc, char **argv)
{
	int			i;
	t_number	*new;

	i = 1;
	while (i < argc)
	{
		new = new_number(ft_atoi(argv[i]));
		add_at_btm(new, lst);
		i++;
	}
	return (i - 1);
}

int	list_is_sorted(t_number *stack)
{
	t_number	*tmp;
	int			check;

	tmp = stack;
	check = 1;
	if (lst_size(stack) >= 2)
	{
		while (tmp->next)
		{
			if (tmp->nb > tmp->next->nb)
			{
				check = 0;
				break ;
			}
			tmp = tmp->next;
		}
	}
	return (check);
}

int	lst_size(t_number *lst)
{
	int			i;

	if (lst == NULL)
		return (0);
	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
