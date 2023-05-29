/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:31:52 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/29 20:14:36 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void move_stacks_dif(t_stack *current, t_stack **list_a, t_stack **list_b)
{
	int	count = 0;
	int	operations_a = 0;
	int	operations_b = 0;
	int	flag_a;
	int	flag_b;
	
	operations_a = count_op(current, stack_size(list_a), &flag_a);
	operations_b = count_stack_b(current->value, *list_a, &flag_b);
	if (flag_a == 0)
		{
			while (count < operations_a)
			{
				rotate_a(list_a, 1);
				count++;
			}
		}
	else
	{
		while (count < operations_a)
		{
			reverse_rotate_a(list_a, 1);
			count++;
		}
	}
	count = 0;
	if (flag_b == 0)
	{
		while (count < operations_b)
		{		
			rotate_b(list_b, 1);
			count++;
		}
	}
	else
	{
		while (count < operations_b)
		{
			reverse_rotate_b(list_b, 1);
			count++;
		}
	}
}

void	send_b(t_stack *current, t_stack **list_a, t_stack **list_b)
{
	int	operations_a;
	int	operations_b;
	int	flag_a;
	int	flag_b;
	int	count;
	int	dif;

	count = 0;
	current = *list_a;
	operations_a = count_op(current, stack_size(list_a), &flag_a);
	operations_b = count_stack_b(current->value, *list_a, &flag_b);
	ft_printf("op a: %d\n op b:%d\n", operations_a, operations_b);
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
