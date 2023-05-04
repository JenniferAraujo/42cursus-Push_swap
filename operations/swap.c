/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:24:55 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/04 14:16:56 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//troca os 2 primeiros elementos no to[p da pilha 'a'
void	swap_a(t_stack **list_a, int flag)
{
	t_stack	*tmp;

	if (list_a && (*list_a)->next != NULL)
	{
		tmp = (*list_a)->next;
		(*list_a)->next = tmp->next;
		tmp->next = *list_a;
		*list_a = tmp;
	}
	if (flag == 1)
		ft_printf("sa\n");
}

//troca os 2 primeiros elementos no topo da pilha b.
void	swap_b(t_stack **list_b, int flag)
{
	t_stack	*tmp;

	if (list_b && (*list_b)->next != NULL)
	{
		tmp = (*list_b)->next;
		(*list_b)->next = tmp->next;
		tmp->next = *list_b;
		*list_b = tmp;
	}
	if (flag == 1)
		ft_printf("sb\n");
}

//Faz o swap_a e swap_b ao mesmo tempo
void	sa_sb(t_stack **list_a, t_stack **list_b)
{
	swap_a(list_a, 0);
	swap_b(list_b, 0);
	ft_printf("ss\n");
}
