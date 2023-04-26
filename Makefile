# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 16:38:20 by jede-ara          #+#    #+#              #
#    Updated: 2023/04/26 17:54:23 by jede-ara         ###   ########.fr        #
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
		checks/args_validations.c \
		checks/free.c \
		checks/ft_error.c \
		init/for_list.c \
		init/algoritm.c \
		init/create_stack.c \
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
