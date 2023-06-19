/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_validations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:50:52 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/12 14:14:37 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	is_int(long long number, t_stack *list)
{
	if (number > INT_MAX || number < INT_MIN)
		ft_error("Error\n", list);
}

void	check_number(const char *str, t_stack *list)
{
	if (*str == '-' || *str == '+')
		str++;
	if (*str == '\0')
		ft_error("Error\n", list);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			ft_error("Error\n", list);
		str++;
	}
}

void	double_number(t_stack *list)
{
	t_stack	*tmp;

	while (list)
	{
		tmp = list->next;
		while (tmp)
		{
			if (list->value == tmp->value)
				ft_error("Error\n", list);
			tmp = tmp->next;
		}
		list = list->next;
	}
}

int	is_ordered(t_stack *list_a)
{
	int		num;
	t_stack	*current;

	  if (list_a == NULL) 
        return (0);
	current = list_a;
	num = current->value;
	current = current->next;
	while (current != NULL)
	{
		if (num > current->value)
			return (1);
		num = current->value;
		current = current->next;
	}
	return (0);
}
