/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull_fcts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:37:01 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/14 23:13:55 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	max_number(t_number **stack)
{
	t_number	*tmp;
	int			max;

	tmp = *stack;
	max = tmp->nb;
	while (tmp)
	{
		if (tmp->nb > max)
			max = tmp->nb;
		tmp = tmp->next;
	}
	return (max);
}

int	min_number(t_number **stack)
{
	t_number	*tmp;
	int			min;

	tmp = *stack;
	min = tmp->nb;
	while (tmp)
	{
		if (tmp->nb < min)
			min = tmp->nb;
		tmp = tmp->next;
	}
	return (min);
}

int	element_position(t_number **stack, int elm)
{
	int			i;
	int			exist;
	t_number	*tmp;

	i = 1;
	exist = -1;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->nb == elm)
		{
			exist = 1;
			break ;
		}
		i++;
		tmp = tmp->next;
	}
	if (exist == -1)
		i = -1;
	return (i);
}

int	element_is_bigger_than_down(t_number **stack, int elm)
{
	t_number	*tmp;

	tmp = *stack;
	if (!tmp)
		return (1);
	while (tmp->next)
		tmp = tmp->next;
	if (elm > tmp->nb)
		return (1);
	return (0);
}

void	verify_counter(int counter, t_number **stack_a)
{
	while (counter > 0)
	{
		rev_rotate_stack(stack_a, "rra");
		counter--;
	}
}
