/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:49:42 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/17 18:29:03 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_two(t_number **stack)
{
	t_number	*tmp;

	tmp = *stack;
	if (tmp->nb > tmp->next->nb)
		swap_stack(stack, "sa\n");
}

void	sort_three(t_number **stack)
{
	t_number	*tmp;

	tmp = *stack;
	if (tmp->nb > tmp->next->nb && tmp->next->nb < tmp->next->next->nb)
	{
		first_case(tmp->nb, tmp->next->next->nb, stack);
		return ;
	}
	if (tmp->nb > tmp->next->nb && tmp->next->nb > tmp->next->next->nb)
	{
		second_case(stack);
		return ;
	}
	if (tmp->nb < tmp->next->nb && tmp->next->nb > tmp->next->next->nb
		&& tmp->nb > tmp->next->next->nb)
	{
		third_case(stack);
		return ;
	}
	if (tmp->nb < tmp->next->nb && tmp->next->nb > tmp->next->next->nb
		&& tmp->nb < tmp->next->next->nb)
		fourth_case(stack);
}

void	sort_four(t_number **stack_a, t_number **stack_b)
{
	int	idx;

	idx = element_position(stack_a, min_number(stack_a));
	if (idx == 1)
		first_idx(stack_a, stack_b);
	if (idx == 2)
		second_idx(stack_a, stack_b);
	if (idx == 3)
		third_idx(stack_a, stack_b);
	if (idx == 4)
		fourth_idx(stack_a, stack_b);
}

void	sort_five(t_number **stack_a, t_number **stack_b)
{
	first_min_push(stack_a, stack_b);
	second_min_push(stack_a, stack_b);
	sort_three(stack_a);
	push_to_stack(stack_b, stack_a, "pa\n");
	push_to_stack(stack_b, stack_a, "pa\n");
}
