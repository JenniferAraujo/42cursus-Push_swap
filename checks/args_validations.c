/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_validations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:50:52 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/26 20:39:40 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void is_int(long long number, t_stack *stack) 
{
    if (number > INT_MAX || number < INT_MIN)
        ft_error("Error", stack);
}

int check_number(t_stack *node)
{
    int str;
    
    str = node->value; 
    
    if  (str == '-' || str == '+')
        str++;
    if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122) || (str == ' ' || str == '\t'))
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
			if (stack->number == tmp->number)
				return (1);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (0);
}

int is_ordered(t_stack *list_a)
{
    if (!list_a) 
        return (1);
    int prev_num = list_a->number;
    t_stack *tail = list_a->next;

    while (tail && tail->number > prev_num)
    {
        prev_num = tail->number;
        tail = tail->next;
    }
    if (!tail)
        return (1);
    else 
        return (0);
}