/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:45:29 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/29 19:09:46 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sorting_three(t_stack **list_a)
{
	if ((*list_a)->value > (*list_a)->next->value && (*list_a)->value < (*list_a)->next->next->value)
		swap_a(list_a, 1);
	else if ((*list_a)->value > (*list_a)->next->value && (*list_a)->next->value > (*list_a)->next->next->value)
	{
		swap_a(list_a, 1);
		reverse_rotate_a(list_a, 1);
	}
	else if ((*list_a)->value > (*list_a)->next->value && (*list_a)->value > (*list_a)->next->next->value)
		rotate_a(list_a, 1);
	else if ((*list_a)->value < (*list_a)->next->next->value && (*list_a)->next->value > (*list_a)->next->next->value)
	{
		swap_a(list_a, 1);
		rotate_a(list_a, 1);
	}
	else if ((*list_a)->value < (*list_a)->next->value && (*list_a)->value > (*list_a)->next->next->value)
		reverse_rotate_a(list_a, 1);
}

