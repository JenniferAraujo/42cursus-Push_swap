/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:19:53 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/02 16:02:08 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_stack(int operations_a, int operations_b, t_stack **list_a,
	t_stack **list_b)
{
	int	count;
	int	dif;

	count = 0;
	if (operations_a <= operations_b)
	{
		while (count++ < operations_a)
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

void	reverse_rotate_stack(int operations_a, int operations_b, t_stack **list_a,
	t_stack **list_b)
{
	int	count;
	int	dif;

	count = 0;
	if (operations_a <= operations_b)
	{
		while (count++ < operations_a)
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

void	send_b(t_stack *current, t_stack **list_a, t_stack **list_b)
{
	int	operations_a;
	int	operations_b;
	int	flag_a;
	int	flag_b;

	flag_a = 0;
	flag_b = 0;
	operations_a = count_op(&current, stack_size(list_a), &flag_a);
	operations_b = count_stack_b(current->value, *list_b, &flag_b);
	if (flag_a == flag_b)
	{
		//ft_printf("IN SEND B 1\nop: %d flag_b: %d\n", operations_b, flag_b);
		//ft_printf("current: %d\n", current->value);
		if (flag_a == 0)
			rotate_stack(operations_a, operations_b, list_a, list_b);
		else
			reverse_rotate_stack(operations_a, operations_b, list_a, list_b);
	}
	if (flag_a != flag_b)
		move_stacks_dif(current, list_a, list_b);
}
