/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:01:45 by jenny             #+#    #+#             */
/*   Updated: 2023/04/24 20:04:37 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Retorna o índice (posição) do elemento na lista
int find_index(t_stack *list, int value)
{
    int index = 0;
    while (list != NULL)
    {
        if (list->value == value)
            return index;
        list = list->next;
        index++;
    }
    return -1; // Se não encontrou o valor na lista
}

// Retorna o tamanho da lista
int stack_size(t_stack *list)
{
    int size = 0;
    while (list != NULL)
    {
        size++;
        list = list->next;
    }
    return size;
}
