/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:38:48 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/29 19:08:30 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*desloca todos os elementos da pilha 'a' para cima em 1. O primeiro elemento
se torna o último*/
void	rotate_a(t_stack **list_a, int flag)
{
	t_stack	*tmp;


	if ((*list_a)->next == NULL)
		return ;
	tmp = (*list_a)->next;
	(*list_a)->next = NULL;
	add_back(&tmp, (*list_a));
	*list_a = tmp;
	change_index_rotate(list_a);
	if(flag == 1)
		ft_printf("ra\n");
}

/*desloca todos os elementos da pilha 'b' para cima em 1. O primeiro elemento
se torna o último*/
void	rotate_b(t_stack **list_b, int flag)
{
	t_stack	*tmp;

	if ((*list_b)->next == NULL)
		return ;
	tmp = (*list_b)->next;
	(*list_b)->next = NULL;
	add_back(&tmp, *list_b);
	*list_b = tmp;
	change_index_rotate(list_b);
	if(flag == 1)
		ft_printf("rb\n");
}

//Faz o rotate_a e rotate_b ao mesmo tempo
void	ra_rb(t_stack **list_a, t_stack **list_b)
{
	rotate_a(list_a, 0);
	rotate_b(list_b, 0);
	ft_printf("rr\n");
}
