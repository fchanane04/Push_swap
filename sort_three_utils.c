/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:21:35 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/17 18:30:03 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	first_case(int nb, int nb_next, t_number **stack)
{
	if (nb > nb_next)
		rotate_stack(stack, "ra\n");
	else
		swap_stack(stack, "sa\n");
}

void	second_case(t_number **stack)
{
	rotate_stack(stack, "ra\n");
	swap_stack(stack, "sa\n");
}

void	third_case(t_number **stack)
{
	rev_rotate_stack(stack, "rra\n");
}

void	fourth_case(t_number **stack)
{
	swap_stack(stack, "sa\n");
	rotate_stack(stack, "ra\n");
}
