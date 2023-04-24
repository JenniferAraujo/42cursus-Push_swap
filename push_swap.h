/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:38:06 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/24 12:49:44 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_stack
{
	int	value;
	int	flag;
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

/* UTILS FOR OPERATIONS */
void	add_back(t_stack **head, t_stack *new);
t_stack	*ft_lstnew(int content);


/* VALIDATIONS*/


/* END */
void	free_stack(t_stack **stack);
void	ft_error(char *c, t_stack *stack);


#endif
