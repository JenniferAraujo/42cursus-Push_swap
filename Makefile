# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 16:38:20 by jede-ara          #+#    #+#              #
#    Updated: 2023/05/30 18:34:55 by jede-ara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
LIBFT = ./libft/libft.a
LIBFTDIR = ./libft

SRC = operations/swap.c \
		operations/rotate.c \
		operations/reverse_rotate.c \
		operations/push.c \
		functions_utils/operations_utils.c \
		functions_utils/change_index.c \
		validations/args_validations.c \
		init/start_validations.c \
		init/for_stack.c \
		init/create_stack.c \
		costs/count_op.c \
		costs/bigger_numbers.c \
		costs/smaller_numbers.c \
		costs/find_element_with_less_operations.c \
		moves/sorting_three.c \
		moves/algoritm.c \
		moves/moves_stacks.c \
		moves/send_numbers.c \
		moves/last_move.c \
		end/free.c \
		end/ft_error.c \
		push_swap.c
		
OBJ = $(SRC:%.c=%.o)

GREEN		:=	\033[1;32m
RED			:=	\033[1;31m
WHITE		:=	\033[1;37m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(GREEN) [Success] Push_swap compilation.$(BOLD)"
	$(MAKE) -C $(LIBFTDIR)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME) 
	@echo "$(GREEN) [Success] ./push_swap created.$(BOLD)"

clean:
	$(MAKE) clean -C ./libft
	@rm -rf $(OBJ)
	@echo "$(RED) [Deleting] object files deleted.$(BOLD)"

fclean: clean
	$(MAKE) fclean -C ./libft
	@rm -rf $(NAME) $(OBJ)
	@echo "$(RED) [Deleting] .a deleted.$(BOLD)"

re: fclean all

.SILENT:

.PHONY: all clean fclean re
