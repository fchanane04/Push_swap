/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:59:16 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/17 18:30:24 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	push_to_stack(t_number **from_stack, t_number **to_stack, char *opt)
{
	t_number	*new;
	t_number	*tmp_from;

	tmp_from = *from_stack;
	new = new_number(tmp_from->nb);
	new->next = *to_stack;
	*to_stack = new;
	*from_stack = tmp_from->next;
	tmp_from->next = NULL;
	free(tmp_from);
	ft_putstr(opt);
}

void	swap_stack(t_number **stack, char *opt)
{
	t_number	*tmp;
	t_number	*head;

	tmp = *stack;
	*stack = tmp->next;
	head = *stack;
	tmp->next = tmp->next->next;
	head->next = tmp;
	ft_putstr(opt);
}

void	rev_rotate_stack(t_number **stack, char *opt)
{
	t_number	*tmp;
	t_number	*rtt;

	tmp = *stack;
	rtt = *stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	while (rtt->next->next != NULL)
		rtt = rtt->next;
	rtt->next = NULL;
	add_at_top(tmp, stack);
	ft_putstr(opt);
}

void	rotate_stack(t_number **stack, char *opt)
{
	t_number	*tmp;

	tmp = *stack;
	*stack = tmp->next;
	tmp->next = NULL;
	add_at_btm(tmp, stack);
	ft_putstr(opt);
}
