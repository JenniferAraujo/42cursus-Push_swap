/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:24:55 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/14 15:03:46 by jede-ara         ###   ########.fr       */
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

//Faz o swap_a e swap_b ao mesmo tempo
void	sa_sb(t_stack **list_a, t_stack **list_b)
{
	swap_a(list_a, 0);
	swap_b(list_b, 0);
	write(1, "ss\n", 3);
}