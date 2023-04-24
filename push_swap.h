/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:38:06 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/24 15:11:32 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef struct	s_stack
{
	int	value;
	int	flag;
	int	number;
	struct s_stack *next;
}							t_stack;

/* OPERATIONS */
void	swap_a(t_stack **list_a, int flag);
void	swap_b(t_stack **list_b, int flag);
void	sa_sb(t_stack **list_a, t_stack **list_b);
void	rotate_a(t_stack **list_a, int flag);
void	rotate_b(t_stack **list_b, int flag);
void	ra_rb(t_stack **list_a, t_stack **list_b);
void	reverse_rotate_a(t_stack **list_a, int flag);
void	reverse_rotate_b(t_stack **list_b, int flag);
void	rrr(t_stack **list_a, t_stack **list_b);
void	push_a(t_stack **list_a, t_stack **list_b);
void	push_b(t_stack **list_a, t_stack **list_b);

/* UTILS */
void	add_back(t_stack **head, t_stack *new);
t_stack	*ft_lstnew(int content);
int	ft_atoi(const char *str);

/* VALIDATIONS*/
void is_int(long long number, t_stack *list);
int check_number(t_stack *node);
int	double_number(t_stack *stack);
int is_ordered(t_stack *list_a);

/* END */
void	free_stack(t_stack **stack);
void	ft_error(t_stack *stack);


#endif
