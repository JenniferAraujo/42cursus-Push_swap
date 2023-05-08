/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:28:50 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/08 21:12:11 by jede-ara         ###   ########.fr       */
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
 
 //rever essa funcao
int count_stack_b(int nbr, t_stack *stack, int *flag)
{
    t_stack *current = stack;
    while (current != NULL && current->value != nbr)
        current = current->next;
    if (current == NULL || (nbr > biggest_number(stack) || nbr < smallest_number(stack)))
        current = biggest_number(stack);
    else
        current = next_smallest(nbr, stack);

    current->number = count_op(current, stack_size(stack), flag);
    return (current->number);
}
