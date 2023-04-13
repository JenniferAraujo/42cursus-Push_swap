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

/* UTILS FOR OPERATIONS */
void	ft_lstaddback(t_stack **head, t_stack *new);
t_stack	*ft_lstnew(void *value);
#endif
