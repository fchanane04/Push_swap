/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_from_a_to_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:40:51 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/18 18:59:56 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	initialise_chunk(t_sort *var_sort, int lstsize)
{
	var_sort->start = var_sort->start - var_sort->offset;
	if (var_sort->start < 0)
		var_sort->start = 0;
	var_sort->end = var_sort->end + var_sort->offset;
	if (var_sort->end > lstsize - 1)
		var_sort->end = lstsize - 1;
}

int	push_from_chunk(t_number **sa, t_number **sb, t_sort *v_s, t_number *t)
{
	int	i;
	int	elm;

	elm = t->nb;
	i = v_s->start;
	while (i <= v_s->end)
	{
		if (elm == v_s->tab[i])
		{
			push_to_stack(sa, sb, "pb\n");
			if (elm < v_s->tab[v_s->middle])
				rotate_stack(sb, "rb\n");
			t = *sa;
			break ;
		}
		i++;
	}
	return (i);
}

void	push_from_a_to_b(t_number **sa, t_number **sb, int ls, t_sort *v_s)
{
	t_number	*tmp;
	int			i;

	while (lst_size(*sb) < ls)
	{
		tmp = *sa;
		initialise_chunk(v_s, ls);
		while (tmp)
		{
			tmp = *sa;
			i = push_from_chunk(sa, sb, v_s, tmp);
			if (i > v_s->end)
			{
				rotate_stack(sa, "ra\n");
				tmp = *sa;
			}
			if (lst_size(*sb) == v_s->end - v_s->start + 1)
				break ;
		}
	}
}
