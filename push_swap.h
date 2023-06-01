/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:55:00 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/01 21:51:29 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				flag;
	int				index;
	struct s_stack	*next;
}	t_stack;

/* VALIDATIONS*/
void		is_int(long long number, t_stack *list);
void		check_number(const char *str, t_stack *list);
void		double_number(t_stack *list);
int			is_ordered(t_stack *list_a);

/* UTILS */
void		add_back(t_stack **head, t_stack *new);
t_stack		*ft_lstnew(int content, int index);
void		change_index_positive(t_stack **stack);
void		change_index_negative(t_stack **stack);
void		change_index_rotate(t_stack **stack);

/* OPERATIONS */
void		swap_a(t_stack **list_a, int flag);
void		swap_b(t_stack **list_b, int flag);
void		sa_sb(t_stack **list_a, t_stack **list_b);
void		rotate_a(t_stack **list_a, int flag);
void		rotate_b(t_stack **list_b, int flag);
void		ra_rb(t_stack **list_a, t_stack **list_b);
void		reverse_rotate_a(t_stack **list_a, int flag);
void		reverse_rotate_b(t_stack **list_b, int flag);
void		rrr(t_stack **list_a, t_stack **list_b);
void		push_a(t_stack **list_a, t_stack **list_b);
void		push_b(t_stack **list_a, t_stack **list_b);

/* INIT */
void		start_validations(t_stack *list);
void		create_list(t_stack **list, int ac, char **av);
void		print_list(t_stack **head);
int			find_index(t_stack *list, int value);
int			stack_size(t_stack **list);

/* COSTS */
int			count_op(t_stack **current, int size, int *flag);
int			count_stack_b(int nbr, t_stack *list_b, int *flag);
int			count_stack(t_stack *current_a, t_stack *list_a, t_stack *list_b);
t_stack		*smallest_number(t_stack *node);
t_stack		*biggest_number(t_stack *node);
t_stack		*next_smallest(t_stack *first, int number_a);
t_stack		*next_biggest(t_stack *first, int number_a);
t_stack		*find_element_with_less_operations(t_stack **list_a,
				t_stack **list_b);

/*	MOVES */

void		sorting_three(t_stack **list_a);
void		algoritm(t_stack **list_a, t_stack **list_b);
void		ra(t_stack **list_a, int operations, int flag);
void		rb(t_stack **list_b, int operations, int flag);
void		double_rotate(t_stack **list_a, t_stack **list_b, int operations,
				int flag);
int			costs_send_a(int nbr, t_stack *list_a, int *flag);
void		handle_flag_0(int operations_a, int operations_b, t_stack **list_a,
				t_stack **list_b);
void		handle_flag_1(int operations_a, int operations_b, t_stack **list_a,
				t_stack **list_b);
void		send_b(t_stack *current, t_stack **list_a, t_stack **list_b);
void		send_a(t_stack **list_a, t_stack **list_b);
void		move_stacks_dif_a(t_stack *current, t_stack **list_a,
				t_stack **list_b, int flag_a);
void		move_stacks_dif_b(t_stack *current, t_stack **list_a,
				t_stack **list_b, int flag_b);
void		move_stacks_dif(t_stack *current, t_stack **list_a,
				t_stack **list_b);
void		last_move(t_stack **list_a);

/* END */

void		free_stack(t_stack **stack);
void		ft_error(char *c, t_stack *list);

#endif
