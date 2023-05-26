/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:55:18 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/17 18:29:17 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	first_min_push(t_number **stack_a, t_number **stack_b)
{
	int	min;

	min = min_number(stack_a);
	while (element_position(stack_a, min) > 1)
	{
		if (element_position(stack_a, min) < 3)
			rotate_stack(stack_a, "ra\n");
		if (element_position(stack_a, min) >= 3)
			rev_rotate_stack(stack_a, "rra\n");
	}
	push_to_stack(stack_a, stack_b, "pb\n");
}

void	second_min_push(t_number **stack_a, t_number **stack_b)
{
	int	min;

	min = min_number(stack_a);
	while (element_position(stack_a, min) > 1)
	{
		if (element_position(stack_a, min) < 3)
			rotate_stack(stack_a, "ra\n");
		if (element_position(stack_a, min) >= 3)
			rev_rotate_stack(stack_a, "rra\n");
	}
	push_to_stack(stack_a, stack_b, "pb\n");
}
