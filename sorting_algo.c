/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:21:58 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/18 21:47:41 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	*sort_ref_str(int *ref, int lstsize)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < lstsize)
	{
		j = i + 1;
		while (j < lstsize)
		{
			if (ref[j] < ref[i])
			{
				tmp = ref[i];
				ref[i] = ref[j];
				ref[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (ref);
}

int	*reference_str(t_number **stack, int lstsize)
{
	t_number	*tmp;
	int			*ref;
	int			i;

	tmp = *stack;
	ref = malloc(sizeof(int) * lstsize);
	i = 0;
	while (i < lstsize)
	{
		ref[i] = tmp->nb;
		tmp = tmp->next;
		i++;
	}
	return (sort_ref_str(ref, lstsize));
}

int	initialize_divid(int lstsize)
{
	if (lstsize <= 10)
		return (2);
	if (lstsize > 10 && lstsize <= 150)
		return (8);
	if (lstsize > 150)
		return (18);
	return (-1);
}

void	initialize_var(t_sort *var_sort, int lstsize)
{
	var_sort->divid = initialize_divid(lstsize);
	var_sort->middle = lstsize / 2;
	var_sort->offset = lstsize / var_sort->divid;
	var_sort->start = var_sort->middle;
	var_sort->end = var_sort->middle;
}

void	sorting_algo(int lstsize, t_number **stack_a, t_number **stack_b)
{
	t_sort		var_sort;

	var_sort.tab = reference_str(stack_a, lstsize);
	initialize_var(&var_sort, lstsize);
	push_from_a_to_b(stack_a, stack_b, lstsize, &var_sort);
	push_from_b_to_a(stack_a, stack_b, lstsize, &var_sort);
	free(var_sort.tab);
}
