/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:45:29 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/24 20:11:41 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sorting_three(t_stack **list_a)
{
	if ((*list_a)->value > (*list_a)->next->value && (*list_a)->value < (*list_a)->next->next->value)
	{
		ft_printf("entra aqui 1\n");
		swap_a(list_a);
	}
	else if ((*list_a)->value > (*list_a)->next->value && (*list_a)->next->value > (*list_a)->next->next->value)
	{
		ft_printf("entra aqui 2\n");
		swap_a(list_a);
		reverse_rotate_a(list_a);
	}
	else if ((*list_a)->value > (*list_a)->next->value && (*list_a)->value > (*list_a)->next->next->value)
	{
		ft_printf("entra aqui 3\n");
		rotate_a(list_a);
	}
	else if ((*list_a)->value < (*list_a)->next->next->value && (*list_a)->next->value > (*list_a)->next->next->value)
	{
		ft_printf("entra aqui 4\n");
		swap_a(list_a);
		rotate_a(list_a);
	}
	else if ((*list_a)->value < (*list_a)->next->value && (*list_a)->value > (*list_a)->next->next->value)
	{
		ft_printf("entra aqui 5\n");
		reverse_rotate_a(list_a);
	}
}

