/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:24:55 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/29 19:05:14 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_stack **list_a, int flag)
{
	int	temp;

	if (list_a && (*list_a)->next != NULL)
	{
		temp = (*list_a)->value;
		(*list_a)->value = (*list_a)->next->value;
		(*list_a)->next->value = temp;
		if (flag == 1)
			ft_printf("sa\n");
	}
}

void	swap_b(t_stack **list_b, int flag)
{
	int	temp;

	if (list_b && (*list_b)->next != NULL)
	{
		temp = (*list_b)->value;
		(*list_b)->value = (*list_b)->next->value;
		(*list_b)->next->value = temp;
		if (flag == 1)
			ft_printf("sa\n");
	}
}

void	sa_sb(t_stack **list_a, t_stack **list_b)
{
	swap_a(list_a, 0);
	swap_b(list_b, 0);
	ft_printf("ss\n");
}
