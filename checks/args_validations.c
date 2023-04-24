/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_validations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:50:52 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/24 15:17:56 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void is_int(long long number, t_stack *stack) 
{
    if (number > INT_MAX || number < INT_MIN)
        ft_error(stack);
}

int check_number(t_stack *node)
{
    int c;
    
    c = node->value; 
    
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c == '-' || c == '+') || (c == ' ' || c == '\t'))
    {
        if ((c >= 48) && (c <= 57)) 
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
        return 1; // Se a pilha estiver vazia, ela é considerada ordenada, então retornamos 1

    t_stack *tail = list_a->next; // Criamos um ponteiro para a cauda, apontando para o segundo elemento da pilha

    while (tail && list_a->number <= tail->number) // Enquanto a cauda não for nula e a cabeça for menor ou igual à cauda
        tail = tail->next; // Avança o ponteiro da cauda para o próximo elemento

    if (!tail)
        return 1; // Se a cauda estiver vazia, a pilha está ordenada, então retornamos 1
    else 
        return 0; // Caso contrário, a pilha não está ordenada, então retornamos 0
}
