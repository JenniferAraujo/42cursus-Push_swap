/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:43:40 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/02 16:03:58 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algoritm(t_stack **list_a, t_stack **list_b)
{
	t_stack	*current;

	if (stack_size(list_a) > 3 && is_ordered(*list_a))
	{
		push_b(list_a, list_b);
		if (stack_size(list_a) > 4)
			push_b(list_a, list_b);
	}
	while (stack_size(list_a) > 3 && is_ordered(*list_a))
	{
		current = find_element_with_less_operations(list_a, list_b);
		send_b(current, list_a, list_b);
		push_b(list_a, list_b);
	}
	if (stack_size(list_a) == 3 && is_ordered(*list_a))
		sorting_three(list_a);
	send_a(list_a, list_b);
	last_move(list_a);
}
