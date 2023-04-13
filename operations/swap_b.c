/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:39:07 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/13 17:50:18 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//troca os 2 primeiros elementos no topo da pilha b.
void	swap_b(t_stack **list_b, int flag)
{
	t_stack	*tmp;

	if (list_b && (*list_b)->next != NULL) //se 'list_b' existe e possui pelo menos dois elementos.
	{
		tmp = (*list_b)->next; //armazena o segundo elemento da pilha 'list_b' na variável 'tmp'.
		(*list_b)->next = tmp->next; //atualiza o ponteiro 'next' do primeiro elemento para apontar para o terceiro elemento da pilha.
		tmp->next = *list_b; //atualiza o ponteiro 'next' do segundo elemento para apontar para o primeiro elemento da pilha.
		*list_b = tmp; //atualiza o ponteiro da pilha 'list_b' para apontar para o elemento armazenado em 'tmp'
	}
	if (flag == 1) //Se flag for 1 indica que a operação foi realizada com sucesso e então print sb
		write(1, "sb\n", 3);
}
