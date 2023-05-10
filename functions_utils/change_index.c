/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:24:22 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/10 21:02:52 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	change_index_positive(t_stack *stack)
{
	t_stack	*current;

	//stack->index = 0;
	current = stack->next;
	while (current != NULL)
	{
		current->index = current->index + 1;
		current = current->next;
	}
}

void	change_index_negative(t_stack *stack)
{
	t_stack	*current;

	//stack->index = 0;
	current = stack->next;
	while (current != NULL)
	{
		current->index = current->index - 1;
		current = current->next;
	}
}

void	change_index_rotate(t_stack *stack)
{
	t_stack	*current;
	int temp;
	
	stack->index = 0;
	current = stack->next;
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