/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:40:11 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/17 18:29:44 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	first_idx(t_number **stack_a, t_number **stack_b)
{
	push_to_stack(stack_a, stack_b, "pb\n");
	sort_three(stack_a);
	push_to_stack(stack_b, stack_a, "pa\n");
}

void	second_idx(t_number **stack_a, t_number **stack_b)
{
	rotate_stack(stack_a, "ra\n");
	push_to_stack(stack_a, stack_b, "pb\n");
	sort_three(stack_a);
	push_to_stack(stack_b, stack_a, "pa\n");
}

void	third_idx(t_number **stack_a, t_number **stack_b)
{
	rev_rotate_stack(stack_a, "rra\n");
	rev_rotate_stack(stack_a, "rra\n");
	push_to_stack(stack_a, stack_b, "pb\n");
	sort_three(stack_a);
	push_to_stack(stack_b, stack_a, "pa\n");
}

void	fourth_idx(t_number **stack_a, t_number **stack_b)
{
	rev_rotate_stack(stack_a, "rra\n");
	push_to_stack(stack_a, stack_b, "pb\n");
	sort_three(stack_a);
	push_to_stack(stack_b, stack_a, "pa\n");
}
