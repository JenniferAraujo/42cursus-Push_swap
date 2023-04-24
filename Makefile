# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 16:38:20 by jede-ara          #+#    #+#              #
#    Updated: 2023/04/19 19:49:29 by jede-ara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g

SRC = operations/swap.c \
		operations/rotate.c \
		operations/reverse_rotate.c \
		operations/push.c \
		operations_utils/operations_utils.c \
		push_swap.c
		
OBJ = $(SRC:%.c=%.o)

GREEN		:=	\033[1;32m
RED			:=	\033[1;31m
WHITE		:=	\033[1;37m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(GREEN) [Success] Push_swap compilation.$(BOLD)"
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN) [Success] ./push_swap created.$(BOLD)"

clean:
	@rm -rf $(OBJ)
	@echo "$(RED) [Deleting] object files deleted.$(BOLD)"

fclean: clean
	@rm -rf $(NAME) $(OBJ)
	@echo "$(RED) [Deleting] .a deleted.$(BOLD)"

re: fclean all

.PHONY: all clean fclean re