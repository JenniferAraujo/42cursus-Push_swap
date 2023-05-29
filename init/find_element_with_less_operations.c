/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_element_with_less_operations.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:20:59 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/29 20:20:19 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*find_element_with_less_operations(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*result = NULL;
	t_stack	*current = *stack_a;
	int		less_operations = 0;
	int		operations;
	int		counter = 0;

	while (current != NULL)
	{
		ft_printf("CURRENT: %d\n", current->value);
		operations = count_stack(current, *stack_a, *stack_b);
		ft_printf("OPERATIONS: %d\n\n", operations);
		if (operations == 0)
		{
			result = current;
			break;
		}
		if (operations < less_operations || less_operations == 0)
		{
			less_operations = operations;
			result = current;
		}
		current = current->next;
		counter++;
	}
	ft_printf("less_op: %d\n", less_operations);
	return (result);
}