/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:28:31 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/26 12:55:20 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_size(t_stack **list)
{
	int		size;
	t_stack	*current;

	current = *list;
	size = 0;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}
