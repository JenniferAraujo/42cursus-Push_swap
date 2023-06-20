/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:32:29 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/12 12:53:54 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//encontra o menor numero em uma stack
t_stack	*smallest_number(t_stack *node)
{
	int		small;
	t_stack	*current;
	t_stack	*result;

	if (node == NULL)
		return (NULL);
	small = node->value;
	result = node;
	current = node->next;
	while (current != NULL)
	{
		if (current->value < small)
		{
			result = current;
			small = current->value;
		}
		current = current->next;
	}
	return (result);
}

//encontra o proximo menor numero da lista 
t_stack	*next_smallest(t_stack *first, int number_a)
{
	int		next_smallest;
	t_stack	*current;
	t_stack	*result;

	current = first;
	while (current->value > number_a)
		current = current->next;
	result = current;
	next_smallest = current->value;
	current = current->next;
	while (current != NULL)
	{
		if (current->value > next_smallest && current->value < number_a)
		{
			result = current;
			next_smallest = current->value;
		}
		current = current->next;
	}
	return (result);
}
