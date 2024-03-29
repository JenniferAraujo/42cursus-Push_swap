/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigger_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:58:15 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/12 12:54:49 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*biggest_number(t_stack *node)
{
	int		big;
	t_stack	*current;
	t_stack	*result;

	if (node == NULL)
		return (NULL);
	big = node->value;
	result = node;
	current = node->next;
	while (current != NULL)
	{
		if (current->value > big)
		{
			result = current;
			big = current->value;
		}
		current = current->next;
	}
	return (result);
}

t_stack	*next_biggest(t_stack *first, int number_a)
{
	int		next_biggest;
	t_stack	*current;
	t_stack	*result;

	current = first;
	while (current->value < number_a)
		current = current->next;
	result = current;
	next_biggest = current->value;
	current = current->next;
	while (current != NULL)
	{
		if (current->value < next_biggest && current->value > number_a)
		{
			result = current;
			next_biggest = current->value;
		}
		current = current->next;
	}
	return (result);
}
