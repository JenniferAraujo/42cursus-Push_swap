/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:55:00 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/09 19:31:19 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "libft/libft.h"

typedef struct	s_stack
{
	int	value;
	int	flag;
	int	index;
	struct s_stack	*next;
}					t_stack;

/* VALIDATIONS*/
void		is_int(long long number, t_stack *list);
int		check_number(t_stack *node);
int		double_number(t_stack *stack);
int		is_ordered(t_stack *list_a);

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
int		find_index(t_stack *list, int value);
int		stack_size(t_stack *list);

/* COSTS */
int		count_op(t_stack *num, int size, int *flag);
int		count_stack_b(int nbr, t_stack *stack, int *flag);
t_stack	*smallest_number(t_stack *node);
t_stack	*biggest_number(t_stack *node);
t_stack	*next_smallest(t_stack *first, int number_a);
t_stack	*next_biggest(t_stack *node, int number_a);

/* UTILS */
void		add_back(t_stack **head, t_stack *new);
t_stack	*ft_lstnew(int content, int index);
void	change_index_positive(t_stack *stack);
void	change_index_negative(t_stack *stack);

/* END */
void	free_stack(t_stack **stack);
void	ft_error(char *c, t_stack *stack);

#endif
