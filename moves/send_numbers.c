/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:19:53 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/31 17:53:42 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	send_b(t_stack *current, t_stack **list_a, t_stack **list_b)
{
	int	operations_a;
	int	operations_b;
	int	flag_a;
	int	flag_b;
	int	count;
	int	dif;

	count = 0;
	operations_a = count_op(&current, stack_size(list_a), &flag_a);
	operations_b = count_stack_b(current->value, *list_b, &flag_b);
	if (flag_a == flag_b)
	{
		if (flag_a == 0)
		{
			if (operations_a <= operations_b)
			{
				while(count++ < operations_a)
					ra_rb(list_a, list_b);
			}
			count = 0;
			if (operations_a > operations_b)
			{
				dif = operations_a - operations_b;
				while (count++ < dif)
					rotate_a(list_a, 1);
			}
			else
			{
				dif = operations_b - operations_a;
				while (count++ < dif)
					rotate_b(list_b, 1);
			}
		}
		else
		{
			if (operations_a <= operations_b)
			{
				while(count++ < operations_a)
					rrr(list_a, list_b);
			}
			count = 0;
			if (operations_a > operations_b)
			{
				dif = operations_a - operations_b;
				while (count++ < dif)
					reverse_rotate_a(list_a, 1);
			}
			else
			{
				dif = operations_b - operations_a;
				while (count++ < dif)
					reverse_rotate_b(list_b, 1);
			}
		}
	}
	count = 0;
	if (flag_a != flag_b)
		move_stacks_dif(current, list_a, list_b);
}

int	costs_send_a(int nbr, t_stack *list_a, int *flag)
{
	int	number_op;
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
	number_op = count_op(&current, stack_size(&list_a), flag);
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
		while(count++ < operations_a)
		{
			if (flag_a == 0)
			{
				rotate_a(list_a, 1);
			}
			else
				reverse_rotate_a(list_a, 1);
		}
		push_a(list_a, list_b);
	}
	
}