/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:28:50 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/15 17:08:47 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//conta o numero de operacoes para ordenar a lista
int	count_op(t_stack *num, int size, int *flag)
{
	int	number_elements;
	int	half_len;

	number_elements = num->value;
	half_len = size / 2;
	if (number_elements <= half_len)
	{
		*flag = 0;
		return (number_elements);
	}
	else
	{
		*flag = 1;
		return (size - number_elements - 1);
	}
}
//para a stack b
int	count_stack_b(int nbr, t_stack *stack, int *flag)
{
	int		number_op;
	t_stack	*current;
	t_stack	*biggest;
	t_stack	*smallest;

	current = stack;
	while (current != NULL && current->value != nbr)
	{
		current = current->next;
	}
	biggest = biggest_number(stack);
	smallest = smallest_number(stack);
	if (current == NULL || (nbr > biggest->value || nbr < smallest->value))
		current = biggest;
	else
		current = next_smallest(stack, nbr);
	number_op = count_op(current, stack_size(stack), flag);
	return (number_op);
}

int	count_stack(t_stack *current_a, t_stack *list_a, int size)
{
	int	i;
	int	flag_a;
	int	flag_b;
	int	operations_a;
	int	operations_b;

	i = 0;
	current_a = list_a;
	while (current_a != NULL)
	{
		operations_a = count_op(current_a, size, &flag_a);
		operations_b = count_stack_b(current_a->value, list_a, &flag_b);
		if (flag_a == flag_b)
		{
			if (operations_a > operations_b)
				i = operations_a - operations_b;
			else
				i = operations_b - operations_a;
			return (operations_a + i);
		}
		current_a = current_a->next;
	}
	return (operations_a + operations_b);
}
