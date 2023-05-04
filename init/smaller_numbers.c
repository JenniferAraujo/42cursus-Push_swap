/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:16:36 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/04 20:44:15 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//encontra o menor numero em uma stack
int	smallest_number(t_stack *node)
{
	int		small;
	t_stack	*current;

	small = node->value;
	current = node->next;
	if (node == NULL)
	{
		ft_printf("Error\nEmpty list");
		return (0);
	}
	while (current != NULL)
	{
		if (current->value < small)
			small = current->value;
		current = current->next;
	}
	return (small);
}

//encontra o proximo menor numero da lista A
int	next_smallest(t_stack *first, int number_a)
{
	int		next_smallest;
	t_stack	*current;
	
	current = first;
	if (current == NULL)
	{
		ft_printf("Error\nEmpty list");
		return (0);
	}
	while (current->value > number_a)
		current = current->next;
	next_smallest = current->value;
	current = current->next;
	while (current != NULL)
	{
		if (current->value > next_smallest && current->value < number_a)
			next_smallest = current->value;
		current = current->next;
	}
	return (next_smallest);
}
