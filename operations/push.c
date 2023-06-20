/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:35:37 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/31 17:57:24 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_stack **list_a, t_stack **list_b)
{
	t_stack	*tmp;

	if (*list_b)
	{
		tmp = (*list_b)->next;
		(*list_b)->next = *list_a;
		*list_a = *list_b;
		*list_b = tmp;
		change_index_positive(list_a);
		change_index_negative(list_b);
		ft_printf("pa\n");
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
		change_index_positive(list_b);
		change_index_negative(list_a);
		ft_printf("pb\n");
	}
}
