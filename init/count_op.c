/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:28:50 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/29 20:37:59 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//conta o numero de operacoes para ordenar a lista
int	count_op(t_stack *num, int size, int *flag)
{
	int	number_elements;
	int	half_len;

	number_elements = num->index;
	half_len = size / 2;
	//ft_printf("number_elements:%d, size:%d, half_len:%d\n", number_elements, size, half_len);
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
	ft_printf("nbr:%d, count_b current: %d\n", nbr, current->value);
	//while (current != NULL && current->value != nbr)
	//{
	//	current = current->next;
	//}
	biggest = biggest_number(stack);
	ft_printf("biggest_number:%d\n", biggest->value);
	smallest = smallest_number(stack);
	ft_printf("smallest_number:%d\n", smallest->value);
	if (current == NULL || (nbr > biggest->value || nbr < smallest->value))
		current = biggest;
	else
		current = next_smallest(stack, nbr);
	number_op = count_op(current, stack_size(&stack), flag);
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
	operations_a = count_op(current_a, stack_size(&list_a), &flag_a);
	ft_printf("op a: %d\nflag_a: %d\n", operations_a, flag_a);
	operations_b = count_stack_b(current_a->value, list_b, &flag_b);
	ft_printf("op b: %d\nflag_b: %d\n", operations_b, flag_b);
	if (flag_a == flag_b)
	{
		ft_printf("entra aqui\n");
		if (operations_a > operations_b)
			i = operations_a - operations_b;
		else
			i = operations_b - operations_a;
		return (operations_a + i);
	}
	return (operations_a + operations_b);
}