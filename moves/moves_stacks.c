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
	int	count;
	int	operations_a;
	t_stack aux;

	aux = *current;
	//ft_printf("a: current: %d\n", current->value);
	count = 0;
	operations_a = count_op(&current, stack_size(list_a), &flag_a);
	//ft_printf("a second: current: %d\n", current->value);
	if (flag_a == 0)
	{
		while (count++ < operations_a)
			rotate_a(list_a, 1);
		//ft_printf("a if: current: %d\n", current->value);
	}
	else
	{
		//ft_printf("a else 1: current: %d\n", current->value);
		while (count++ < operations_a)
			reverse_rotate_a(list_a, 1);
		//ft_printf("a else 2: current: %d\n", current->value);
	}
	//ft_printf("aux %d\n", aux.value);
	return(aux);
	//ft_printf("a final: current: %d\n", current->value);
	//ft_printf("a third: current: %d\n", current->value);
}

void	move_stacks_dif_b(t_stack *current, t_stack **list_b,
	int flag_b)
{
	int	count;
	int	operations_b;

	//ft_printf("b: current: %d\n", current->value);
	count = 0;
	operations_b = count_stack_b(current->value, *list_b, &flag_b);
	//ft_printf("IN SEND B 2\nop: %d flag_b: %d\n", operations_b, flag_b);
	//ft_printf("current: %d\n", current->value);
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
}

void	move_stacks_dif(t_stack *current, t_stack **list_a, t_stack **list_b)
{
	int	flag_a;
	int	flag_b;
	t_stack aux;

	flag_a = 0;
	flag_b = 0;
	//ft_printf("current: %d\n", current->value);
	aux = move_stacks_dif_a(current, list_a, flag_a);
	//ft_printf("sk: current: %d\n", current->value);
	move_stacks_dif_b(&aux, list_b, flag_b);
}
