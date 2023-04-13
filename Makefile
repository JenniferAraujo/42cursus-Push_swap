# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jenny <jenny@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 16:24:17 by jede-ara          #+#    #+#              #
#    Updated: 2023/04/13 14:17:52 by jenny            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = swap_a.c swap_b.c sa_sb.c rotate_a.c ft_lstaddback.c ft_lstnew.c

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

GREEN		:=	\033[1;32m
RED			:=	\033[1;31m
WHITE		:=	\033[1;37m
BOLD		:=	\033[1;1m

all: $(NAME)

%.o: %.c
	@cc $(CFLAGS) -c $< -o $@
	@echo "$(GREEN) [OK] Build completed.$(BOLD)"


$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@echo "$(GREEN)[Success] Done the compilation Push swap.$(BOLD)"
clean:
	@rm -f $(OBJ)
	@echo "$(RED)[Deleting] Object files deleted.$(BOLD)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)[Deleting] .a deleted.$(BOLD)"

re: fclean all

.PHONY: all clean fclean re
