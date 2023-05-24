/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:27:33 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/24 16:45:24 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	last_move(t_list **list_a)
{
	t_stack	*smallest_number;

	smallest_number = smallest_number(list_a);
	smallest_number = count_op(smallest_number, stack_size(list_a), &(smallest_number->flag));
	rotate_a(&list_a);
}

