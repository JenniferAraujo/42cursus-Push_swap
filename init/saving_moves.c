/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saving_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:20:59 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/17 18:37:59 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*saving_moves(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*result = NULL;
	t_stack	*current = stack_a;
	int		less_operations = 0;
	int		operations;
	int		counter = 0;

	while (current != NULL)
	{
		operations = count_stack(current, stack_a, stack_b->index + 1);
		if (operations == 0)
		{
			result = current;
			break;
		}
		if (operations < less_operations || less_operations == 0)
		{
			less_operations = operations;
			result = current;
		}
		current = current->next;
		counter++;
	}
	return (result);
}

