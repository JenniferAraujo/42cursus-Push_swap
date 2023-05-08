/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigger_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:58:15 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/04 20:40:13 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//encontra o maior numero da stack
int	biggest_number(t_stack *node)
{
	int		big;
	t_stack	*current;

	big = node->value;
	current = node->next;
	if (node == NULL)
	{
		ft_printf("Error\nEmpty list");
		return (0);
	}
	while (current != NULL)
	{
		if (current->value > big)
			big = current->value;
		current = current->next;
	}
	return (big);
}

//encontra o proximo maior numero da stack
int	next_biggest(t_stack *node, int	number_a)
{
	int		next_biggest;
	t_stack	*current;
	
	current = node;
	if (current == NULL)
	{
		ft_printf("Error\nEmpty list");
		return (0);
	}
	while (current->value < number_a)
		current = current->next;
	next_biggest = current->value;
	current = current->next;
	while(current != NULL)
	{
		if (current->value < next_biggest && current->value > number_a)
			next_biggest = current->value;
		current = current->next;
	}
	return (next_biggest);
}