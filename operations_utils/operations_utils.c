/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:28:42 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/19 19:49:19 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*node;

	node = (t_stack *) malloc (sizeof(t_stack));
	if (!node)
		return (0);
	node->value = content;
	node->next = NULL;
	return (node);
}

void	add_back(t_stack **head, t_stack *new)
{
	t_stack	*current;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
