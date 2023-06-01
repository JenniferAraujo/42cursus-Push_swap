/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:31:52 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/01 19:07:01 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_stacks_dif_a(t_stack *current, t_stack **list_a, t_stack **list_b,
	int flag_a)
{
	int	count;
	int	operations_a;
	int	operations_b;
	int	flag_b;

	count = 0;
	operations_a = count_op(&current, stack_size(list_a), &flag_a);
	operations_b = count_stack_b(current->value, *list_b, &flag_b);
	if (flag_a == 0)
	{
		while (count++ < operations_a)
			rotate_a(list_a, 1);
	}
	else
	{
		while (count++ < operations_a)
			reverse_rotate_a(list_a, 1);
	}
	count = 0;
}

void	move_stacks_dif_b(t_stack *current, t_stack **list_a, t_stack **list_b,
	int flag_b)
{
	int	count;
	int	operations_a;
	int	operations_b;
	int	flag_a;

	count = 0;
	operations_a = count_op(&current, stack_size(list_a), &flag_a);
	operations_b = count_stack_b(current->value, *list_b, &flag_b);
	if (flag_b == 0)
	{
		while (count++ < operations_b)
			rotate_b(list_b, 1);
	}
	else
	{
		while (count++ < operations_b)
			reverse_rotate_b(list_b, 1);
	}
	count = 0;
}

void	move_stacks_dif(t_stack *current, t_stack **list_a, t_stack **list_b)
{
	int	flag_a;
	int	flag_b;

	flag_a = 0;
	flag_b = 0;
	move_stacks_dif_a(current, list_a, list_b, flag_a);
	move_stacks_dif_b(current, list_a, list_b, flag_b);
}
