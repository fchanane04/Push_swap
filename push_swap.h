/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 00:20:25 by fchanane          #+#    #+#             */
/*   Updated: 2022/08/18 21:50:49 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdlib.h>
# include<unistd.h>
# include<fcntl.h>
# include <string.h>

typedef struct s_number
{
	int				nb;
	struct s_number	*next;
}	t_number;

typedef struct s_five
{
	int	first_min;
	int	second_min;
	int	pst_f_min;
	int	pst_s_min;
}	t_five;

typedef struct s_sort
{
	int	*tab;
	int	divid;
	int	middle;
	int	offset;
	int	start;
	int	end;
}	t_sort;

void		error_msg(void);
void		is_empty(char **argv, int argc);
void		check_list_is_sorted(t_number *stack);
void		is_list_full_of_numbers(int argc, char **argv);
void		numbers_are_not_dup(int argc, char **argv);
t_number	*new_number(int nb);
void		add_at_btm(t_number *new, t_number **lst);
void		add_at_top(t_number *new, t_number **lst);
void		remove_from_top(t_number **lst);
void		remove_from_btm(t_number **lst);
int			fill_in_list(t_number **lst, int argc, char **argv);
int			list_is_sorted(t_number *stack);
int			lst_size(t_number *lst);
void		push_to_stack(t_number **from_stack,
				t_number **to_stack, char *opt);
void		swap_stack(t_number **stack, char *opt);
void		rotate_stack(t_number **stack, char *opt);
void		rev_rotate_stack(t_number **stack, char *opt);
void		first_case(int nb, int nb_next, t_number **stack);
void		second_case(t_number **stack);
void		third_case(t_number **stack);
void		fourth_case(t_number **stack);
void		first_idx(t_number **stack_a, t_number **stack_b);
void		second_idx(t_number **stack_a, t_number **stack_b);
void		third_idx(t_number **stack_a, t_number **stack_b);
void		fourth_idx(t_number **stack_a, t_number **stack_b);
void		initialise_function(t_number **stack, t_five *var_sort);
void		if_min_on_top(t_number **stack_a,
				t_number **stack_b, t_five var_sort);
void		if_min_is_down(t_number **stack_a,
				t_number **stack_b, t_five var_sort);
void		max_is_still_in_stack(t_number **sa,
				t_number **sb, t_five var_sort);
void		sort_two(t_number **stack);
void		sort_three(t_number **stack);
void		sort_four(t_number **stack_a, t_number **stack_b);
void		sort_five(t_number **stack_a, t_number **stack_b);
void		ft_putstr(char *s);
int			ft_strcmp(char *s1, char *s2);
long		ft_atoi(char *str);
int			*reference_str(t_number **stack, int lstsize);
int			initialize_divid(int lstsize);
int			*sort_ref_str(int *ref, int lstsize);
void		initialize_var(t_sort *var_sort, int lstsize);
void		sorting_algo(int lstsize, t_number **stack_a, t_number **stack_b);
void		choose_sort(int lstsize, t_number **stack_a, t_number **stack_b);
int			max_number(t_number **stack);
int			min_number(t_number **stack);
int			element_position(t_number **stack, int elm);
int			element_is_bigger_than_down(t_number **stack, int elm);
void		initialise_chunk(t_sort *var_sort, int lstsize);
int			push_from_chunk(t_number **sa, t_number **sb, \
		t_sort *v_s, t_number *t);
void		push_from_a_to_b(t_number **sa, t_number **sb, int ls, t_sort *v_s);
void		remove_numbers(t_number **stack_b, t_sort *var_sort, int x);
void		verify_counter(int counter, t_number **stack_a);
int			push_it_to_place(int x, t_number **sa, t_number **sb);
int			push_it_to_down(int counter, t_number **sa, t_number **sb);
void		push_from_down(t_number **sa, int *counter, int *x);
void		push_from_b_to_a(t_number **sa, t_number **sb, int ls, t_sort *v_s);
int			search(char *s, int c);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		first_min_push(t_number **stack_a, t_number **stack_b);
void		second_min_push(t_number **stack_a, t_number **stack_b);

#endif
