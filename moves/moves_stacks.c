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

t_stack	move_stacks_dif_a(t_stack *current, t_stack **list_a,
	int flag_a)
{
	int		count;
	int		operations_a;
	t_stack	aux;

	aux = *current;
	count = 0;
	operations_a = count_op_a(&current, stack_size(list_a), &flag_a);
	if (flag_a == 0)
		while (count++ < operations_a)
			rotate_a(list_a, 1);
	else
		while (count++ < operations_a)
			reverse_rotate_a(list_a, 1);
	return (aux);
}

void	move_stacks_dif_b(t_stack *current, t_stack **list_b,
	int flag_b)
{
	int	count;
	int	operations_b;

	count = 0;
	operations_b = count_op_b(current->value, *list_b, &flag_b);
	if (flag_b == 0)
		while (count++ < operations_b)
			rotate_b(list_b, 1);
	else
		while (count++ < operations_b)
			reverse_rotate_b(list_b, 1);
}

void	move_stacks_dif(t_stack *current, t_stack **list_a, t_stack **list_b)
{
	int		flag_a;
	int		flag_b;
	t_stack	aux;

	flag_a = 0;
	flag_b = 0;
	aux = move_stacks_dif_a(current, list_a, flag_a);
	move_stacks_dif_b(&aux, list_b, flag_b);
}
