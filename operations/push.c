/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:35:37 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/18 10:28:55 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Pegue o primeiro elemento no topo de b e coloque-o no topo de a. Não faça nada se b estiver vazio
void	push_a(t_stack **list_a, t_stack **list_b)
{
	t_stack	*tmp;

	if (*list_b) //verifica se a pilha B não está vazia
	{
		tmp = (*list_b)->next; //armazena o próximo nó da pilha B em tmp
		(*list_b)->next = *list_a; //conecta o nó atual da pilha B à pilha A
		*list_a = *list_b; //define o início da pilha A para o nó atual da pilha B
		*list_b = tmp;//define o início da pilha B para o próximo nó
		write(1, "pa\n", 3);
	}
}

void	push_b(t_stack **list_a, t_stack **list_b)
{
	t_stack	*tmp;

	if (*list_a)
	{
		tmp = (*list_a)->next;
		(*list_a)->next = *list_b;
		*list_b = *list_a;
		*list_a = tmp;
		write(1, "pb\n", 3);
	}
}