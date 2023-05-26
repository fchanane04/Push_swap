# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 22:46:51 by fchanane          #+#    #+#              #
#    Updated: 2022/08/18 21:46:19 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS	= push_swap.h

NAME	=	push_swap

NAME_BONUS = checker

CC = gcc

CFLAGS	= -Wall -Wextra -Werror

RM		=	rm -f

SRC = 	errors_handling.c\
		libft.c\
		linked_list_functs.c\
		managing_stack.c\
		small_sort.c\
		moves.c\
		push_swap.c\
		the_sorts.c\
		sorting_algo.c\
		push_from_a_to_b.c\
		push_from_b_to_a.c\
		usefull_fcts.c\
		sort_three_utils.c\
		sort_four_utils.c\
		sort_five_utils.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c Makefile $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

