/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:27:33 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/01 15:21:53 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	last_move(t_stack **list_a)
{
	t_stack	*small;
	int		operations_a;
	int		flag_a;
	int		count;

	count = 0;
	small = smallest_number(*list_a);
	operations_a = count_op(&small, stack_size(list_a), &flag_a);
	if (flag_a == 0)
	{
		while (count++ < operations_a)
			rotate_a(list_a, 1);
	}
	else
	{
		while (count++ < operations_a)
			reverse_rotate_a(list_a, 1);
	}
}