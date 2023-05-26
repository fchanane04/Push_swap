/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 00:23:31 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/18 21:49:11 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int argc, char **argv)
{
	int			lstsize;
	t_number	*stack_a;
	t_number	*stack_b;

	stack_a = NULL;
	is_empty(argv, argc);
	is_list_full_of_numbers(argc, argv);
	numbers_are_not_dup(argc, argv);
	lstsize = fill_in_list(&stack_a, argc, argv);
	check_list_is_sorted(stack_a);
	choose_sort(lstsize, &stack_a, &stack_b);
	return (0);
}
