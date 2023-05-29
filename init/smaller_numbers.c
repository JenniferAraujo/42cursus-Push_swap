
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:16:36 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/09 16:26:17 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//encontra o menor numero em uma stack
t_stack	*smallest_number(t_stack *node)
{
	int		small;
	t_stack	*current;
	t_stack	*result;

	small = node->value;
	result = node;
	current = node->next;
	if (node == NULL)
	{
		ft_printf("Error\n");
		return (0);
	}
	while (current != NULL)
	{
		if (current->value < small)
			result = current;
		current = current->next;
	}
	return (result);
}

//encontra o proximo menor numero da lista A
t_stack	*next_smallest(t_stack *first, int number_a)
{
	int		next_smallest;
	t_stack	*current;
	t_stack	*result;
	
	current = first;
	if (current == NULL)
	{
		ft_printf("Error\n");
		return (0);
	}
	while (current->value > number_a)
		current = current->next;
	next_smallest = current->value;
	current = current->next;
	while (current != NULL)
	{
		if (current->value > next_smallest && current->value < number_a)
			result = current;
		current = current->next;
	}
	return (result);
}
