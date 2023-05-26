/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_functs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:44:46 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/12 18:41:22 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_number	*new_number(int nb)
{
	t_number	*new;

	new = malloc (sizeof(t_number));
	if (!new)
		return (NULL);
	new->nb = nb;
	new->next = NULL;
	return (new);
}

void	add_at_btm(t_number *new, t_number **lst)
{
	t_number	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->next = NULL;
}

void	add_at_top(t_number *new, t_number **lst)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

void	remove_from_top(t_number **lst)
{
	t_number	*tmp;
	t_number	*fr;

	fr = *lst;
	tmp = *lst;
	*lst = tmp->next;
	free(fr);
}

void	remove_from_btm(t_number **lst)
{
	t_number	*tmp;
	t_number	*fr;

	tmp = *lst;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	fr = tmp->next;
	tmp->next = NULL;
	free(fr);
}
