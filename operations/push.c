/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:35:37 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/27 15:59:50 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*Pegue o primeiro elemento no topo de b e coloque-o no topo de a. Não faça
nada se b estiver vazio*/
void	push_a(t_stack **list_a, t_stack **list_b)
{
	t_stack	*tmp;

	if (*list_b)
	{
		tmp = (*list_b)->next;
		(*list_b)->next = *list_a;
		*list_a = *list_b;
		*list_b = tmp;
		write(1, "pa\n", 3);
	}
}

void	push_b(t_stack **list_a, t_stack **list_b)
{
	t_stack	*tmp;

	if (*list_a)
	{
		tmp = (*list_a)->next;
		(*list_a)->next = *list_b;
		*list_b = *list_a;
		*list_a = tmp;
		write(1, "pb\n", 3);
	}
}
