/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:28:31 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/04 14:59:01 by jede-ara         ###   ########.fr       */
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
