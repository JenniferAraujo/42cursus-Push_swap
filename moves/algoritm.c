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
		//ft_printf("Antes do current\n");
		current = find_element_with_less_operations(list_a, list_b);
		//ft_printf("Antes do send b\n");
		send_b(current, list_a, list_b);
		//ft_printf("Antes do push b\n");
		push_b(list_a, list_b);
		print_list(list_a, 'a');
		print_list(list_b, 'b');
	}
	//ft_printf("SORT 3:\n");
	if (stack_size(list_a) == 3 && is_ordered(*list_a))
		sorting_three(list_a);
	//print_list(list_a, 'a');
	//print_list(list_b, 'b');
	//ft_printf("MOVE TO A:\n");
	send_a(list_a, list_b);
	//print_list(list_a, 'a');
	//print_list(list_b, 'b');
	//ft_printf("FINAL ROTATION:\n");
	last_move(list_a);
	//print_list(list_a, 'a');
	//print_list(list_b, 'b');
}
