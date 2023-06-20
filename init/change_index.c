/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:24:22 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/31 17:54:28 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	change_index_positive(t_stack **list)
{
	t_stack	*current;

	current = (*list);
	current->index = 0;
	current = (*list)->next;
	while (current != NULL)
	{
		current->index = current->index + 1;
		current = current->next;
	}
}

void	change_index_negative(t_stack **list)
{
	t_stack	*current;

	current = (*list);
	if (current == NULL || current->next == NULL)
		return ;
	current->index = 0;
	current = (*list)->next;
	while (current != NULL)
	{
		current->index = current->index - 1;
		current = current->next;
	}
}

void	change_index_rotate(t_stack **list)
{
	t_stack	*current;
	int		temp;

	(*list)->index = 0;
	current = (*list)->next;
	while (current != NULL)
	{
		if (current->next == NULL)
		{
			current->index = temp + 1;
			current = current->next;
		}
		else
		{
			current->index = current->index - 1;
			temp = current->index;
			current = current->next;
		}
	}
}
