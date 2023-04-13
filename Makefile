# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 16:38:20 by jede-ara          #+#    #+#              #
#    Updated: 2023/04/13 21:34:25 by jede-ara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra 

SRC = operations/swap_a.c \
		operations/swap_b.c \
		operations/sa_sb.c \
		operations/rotate_a.c \
		operations/rotate_b.c \
		operations/ra_rb.c \
		operations_utils/add_back.c \
		operations_utils/ft_lstnew.c \
		push_swap.c
		
OBJ = $(SRC:%.c=%.o)

GREEN		:=	\033[1;32m
RED			:=	\033[1;31m
WHITE		:=	\033[1;37m
BOLD		:=	\033[1;1m

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
