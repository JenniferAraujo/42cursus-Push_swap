/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:19:53 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/30 18:23:14 by jede-ara         ###   ########.fr       */
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
	operations_a = count_op(current, stack_size(list_a), &flag_a);
	operations_b = count_stack_b(current->value, *list_b, &flag_b);
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

/*void	send_a(t_stack *current, t_stack **list_a, t_stack **list_b)
{
	


	
}
int	count_stack_b(int nbr, t_stack *list_b, int *flag)
{
	int		number_op;
	t_stack	*current;
	t_stack	*biggest;
	t_stack	*smallest;

	current = list_b;
	ft_printf("nbr:%d, count_b current: %d\n", nbr, current->value);
	//while (current != NULL && current->value != nbr)
	//{
	//	current = current->next;
	//}
	biggest = biggest_number(list_b);
	ft_printf("biggest_number:%d\n", biggest->value);
	smallest = smallest_number(list_b);
	ft_printf("smallest_number:%d\n", smallest->value);
	if (current == NULL || (nbr > biggest->value || nbr < smallest->value))
		current = biggest;
	else
	{
		ft_printf("entra aqui caralho\n");
		current = next_smallest(list_b, nbr);
		ft_printf("LIST B?\n");
		print_list(&list_b);
		ft_printf("next smallest: %d\n", current->value);
	}
	number_op = count_op(current, stack_size(&list_b), flag);
	return (number_op);
}*/