/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:16:35 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/01 20:16:58 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	costs_send_a(int nbr, t_stack *list_a, int *flag)
{
	int		number_op;
	t_stack	*current;
	t_stack	*biggest;
	t_stack	*smallest;

	current = list_a;
	biggest = biggest_number(list_a);
	smallest = smallest_number(list_a);
	if (current == NULL || (nbr > biggest->value || nbr < smallest->value))
		current = smallest;
	else
		current = next_biggest(list_a, nbr);
	number_op = count_op_a(&current, stack_size(&list_a), flag);
	return (number_op);
}

void	send_a(t_stack **list_a, t_stack **list_b)
{
	int	nbr;
	int	operations_a;
	int	flag_a;
	int	count;

	while (stack_size(list_b))
	{
		nbr = (*list_b)->value;
		count = 0;
		operations_a = costs_send_a(nbr, *list_a, &flag_a);
		while (count++ < operations_a)
		{
			if (flag_a == 0)
				rotate_a(list_a, 1);
			else
				reverse_rotate_a(list_a, 1);
		}
		push_a(list_a, list_b);
	}
}
