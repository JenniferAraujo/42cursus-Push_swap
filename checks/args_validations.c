/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_validations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:50:52 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/10 18:55:53 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	is_int(long long number, t_stack *stack)
{
	if (number > INT_MAX || number < INT_MIN)
		ft_error("Error\nIs not an integer", stack);
}

int	check_number(t_stack *node)
{
	int	str;

	str = node->value;
	if (str == '-' || str == '+')
		str++;
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122)
		|| (str == ' ' || str == '\t'))
	{
		if ((str >= 48) && (str <= 57))
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int	double_number(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (stack->value == tmp->value)
				return (1);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (0);
}

int	is_ordered(t_stack *list_a)
{
	t_stack	*tail;
	int		prev_num;

	if (!list_a)
		return (1);
	prev_num = list_a->value;
	tail = list_a->next;
	while (tail && tail->value > prev_num)
	{
		prev_num = tail->value;
		tail = tail->next;
	}
	if (!tail)
		return (1);
	else
		return (0);
}
