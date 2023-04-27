/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:28:31 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/26 20:41:11 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Retorna o índice (posição) do elemento na lista
int	find_index(t_stack *list, int value)
{
	int	index;

	index = 0;
	while (list != NULL)
	{
		if (list->value == value)
			return (index);
		list = list->next;
		index++;
	}
	return (0);
}

// Retorna o tamanho da lista
int	stack_size(t_stack *list)
{
	int	size;

	size = 0;
	while (list != NULL)
	{
		size++;
		list = list->next;
	}
	return (size);
}

//encontra o menor numero em uma stack
int	smallest_number(t_stack *node)
{
	int		small;
	t_stack	*current;

	small = node->value;
	*current = node->next;
	if (node == NULL)
	{
		printf("Lista vazia.");
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

//encontra o maior numero em uma stack
int	biggest_number(t_stack *node)
{
	int		big;
	t_stack	*current;

	big = node->value;
	*current = node->next;
	if (node == NULL)
	{
		ft_printf("Lista vazia.");
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
