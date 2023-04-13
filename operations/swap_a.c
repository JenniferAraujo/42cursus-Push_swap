/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:39:02 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/13 17:50:08 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//troca os 2 primeiros elementos no to[p da pilha 'a'
void	swap_a(t_stack **list_a, int flag)
{
	t_stack	*tmp;

	if (list_a && (*list_a)->next != NULL) //verifica se a list_a existe e possui pelo menos dois elementos
	{	
		tmp = (*list_a)->next; //armazena o segundo elemento da pilha 'list_a' na variável 'tmp'
		(*list_a)->next = tmp->next;//atualiza o ponteiro 'next' do primeiro elemento para apontar para o terceiro elemento da pilha.
		tmp->next = *list_a; //atualiza o ponteiro 'next' do segundo elemento para apontar para o primeiro elemento da pilha.
		*list_a = tmp; //atualiza o ponteiro da pilha 'list_a' para apontar para o elemento armazenado em 'tmp'
	}
	if (flag == 1) //Se flag for 1 indica que a operação foi realizada com sucesso e então print sa
		write(1, "sa\n", 3);
}
