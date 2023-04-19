/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:38:48 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/19 19:49:22 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//desloca todos os elementos da pilha 'a' para cima em 1. O primeiro elemento se torna o último
void	rotate_a(t_stack **list_a, int flag)
{
	t_stack	*tmp;

	if ((*list_a)->next == NULL) //verique se a lista tem apenas um elemento ou está vazia
		return ;
	tmp = (*list_a)->next; //atribui o segundo elemento da lista para tmp
	(*list_a)->next = NULL; //define o próximo elemento do primeiro nó como NULL	 
	add_back(&tmp, *list_a); //o primeiro nó é adicionado ao final da lista
	*list_a = tmp; //o ponteiro da lista é atualizado para apontar para o novo primeiro nó (o segundo nó original)
	if (flag == 1) //se flag for 1 indica que a operação foi realizada com sucesso e então print ra
		write(1, "ra\n", 3);
}

//desloca todos os elementos da pilha 'b' para cima em 1. O primeiro elemento se torna o último
void	rotate_b(t_stack **list_b, int flag)
{
	t_stack	*tmp;

	if ((*list_b)->next == NULL)
		return ;
	tmp = (*list_b)->next;
	(*list_b)->next = NULL;
	add_back(&tmp, *list_b);
	*list_b = tmp;
	if (flag == 1)
		write(1, "rb\n", 3);
}

//Faz o rotate_a e rotate_b ao mesmo tempo
void	ra_rb(t_stack **list_a, t_stack **list_b)
{
	rotate_a(list_a, 0);
	rotate_b(list_b, 0);
	write(1, "rr\n", 3);
}
