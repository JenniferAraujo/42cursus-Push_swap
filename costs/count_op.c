/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:28:50 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/12 14:34:28 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//conta o numero de operacoes para ordenar a lista
int	count_op(t_stack **current, int size, int *flag)
{
	int	index_element;
	int	half_len;

	if (*current == NULL)
		return (0);
	index_element = (*current)->index;
	half_len = size / 2;
	if (index_element <= half_len)
	{
		*flag = 0;
		return (index_element);
	}
	else
	{
		*flag = 1;
		return (size - index_element);
	}
}

//para a stack b
int	count_stack_b(int nbr, t_stack *list_b, int *flag)
{
	int		number_op;
	t_stack	*current;
	t_stack	*biggest;
	t_stack	*smallest;

	current = list_b;
	biggest = biggest_number(list_b);
	smallest = smallest_number(list_b);
	if (current == NULL || (nbr > biggest->value || nbr < smallest->value))
		current = biggest;
	else
		current = next_smallest(list_b, nbr);
	number_op = count_op(&current, stack_size(&list_b), flag);
	return (number_op);
}

int	count_stack(t_stack *current_a, t_stack *list_a, t_stack *list_b)
{
	int	i;
	int	flag_a;
	int	flag_b;
	int	operations_a;
	int	operations_b;

	i = 0;
	operations_a = count_op(&current_a, stack_size(&list_a), &flag_a);
	operations_b = count_stack_b(current_a->value, list_b, &flag_b);
	if (flag_a == flag_b)
	{
		if (operations_a > operations_b)
		{
			i = operations_a - operations_b;
			return (operations_b + i);
		}
		i = operations_b - operations_a;
		return (operations_a + i);
	}
	return (operations_a + operations_b);
}
