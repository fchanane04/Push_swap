/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_from_b_to_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:45:09 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/18 18:28:00 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	remove_numbers(t_number **stack_b, t_sort *var_sort, int x)
{
	if (element_position(stack_b, var_sort->tab[x]) > (lst_size(*stack_b) / 2))
		rev_rotate_stack(stack_b, "rrb\n");
	else
		rotate_stack(stack_b, "rb\n");
}

int	push_it_to_place(int x, t_number **sa, t_number **sb)
{
	push_to_stack(sb, sa, "pa\n");
	return (x - 1);
}

int	push_it_to_down(int counter, t_number **sa, t_number **sb)
{
	push_to_stack(sb, sa, "pa\n");
	rotate_stack(sa, "ra\n");
	return (counter + 1);
}

void	push_from_down(t_number **sa, int *counter, int *x)
{
	rev_rotate_stack(sa, "rra\n");
	*counter = *counter - 1;
	*x = *x - 1;
}

void	push_from_b_to_a(t_number **sa, t_number **sb, int ls, t_sort *v_s)
{
	t_number	*tmp;
	int			counter;
	int			x;

	counter = 0;
	x = ls - 1;
	while (x >= 0)
	{
		tmp = *sb;
		if (element_position(sb, v_s->tab[x]) > 0)
		{
			if (tmp->nb == v_s->tab[x])
				x = push_it_to_place(x, sa, sb);
			else
			{
				if (counter == 0 || element_is_bigger_than_down(sa, tmp->nb))
					counter = push_it_to_down(counter, sa, sb);
				else
					remove_numbers(sb, v_s, x);
			}
		}
		else
			push_from_down(sa, &counter, &x);
	}
	verify_counter(counter, sa);
}
