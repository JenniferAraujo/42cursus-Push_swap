/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_element_with_less_operations.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:20:59 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/31 18:03:33 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*find_element_with_less_operations(t_stack **list_a, t_stack **list_b)
{
	t_stack	*result;
	t_stack	*current;
	int		less_operations;
	int		operations;
	int		count;

	current = *list_a;
	count = 0;
	while (current != NULL)
	{
		operations = count_stack(current, *list_a, *list_b);
		if (operations == 0)
		{
			result = current;
			break ;
		}
		if (operations < less_operations || less_operations == 0)
		{
			less_operations = operations;
			result = current;
		}
		current = current->next;
		count++;
	}
	return (result);
}
