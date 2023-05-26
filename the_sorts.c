/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_sorts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:24:09 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/12 19:10:30 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	choose_sort(int lstsize, t_number **stack_a, t_number **stack_b)
{
	if (lstsize == 2)
		sort_two(stack_a);
	if (lstsize == 3)
		sort_three(stack_a);
	if (lstsize == 4)
		sort_four(stack_a, stack_b);
	if (lstsize == 5)
		sort_five(stack_a, stack_b);
	if (lstsize > 5)
		sorting_algo(lstsize, stack_a, stack_b);
}
