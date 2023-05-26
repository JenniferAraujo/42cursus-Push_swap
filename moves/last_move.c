/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:27:33 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/26 15:26:38 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	last_move(t_stack **list_a)
{
	t_stack	*small;

	small = smallest_number(*list_a);
	small = count_op(small, stack_size(list_a), &(small->flag));
	rotate_a(list_a);
}

