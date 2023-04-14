/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:38:48 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/14 13:30:07 by jede-ara         ###   ########.fr       */
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

	if ((*list_b)->next == NULL) //verifica se a pilha tem apenas um elemento
		return ;
	tmp = (*list_b)->next; //salva o segundo elemento da pilha em uma variável temporária
	(*list_b)->next = NULL; //define o próximo elemento do primeiro como nulo
	add_back(&tmp, *list_b);//adiciona o primeiro elemento no final da pilha
	*list_b = tmp; //atualiza o ponteiro para o início da pilha
	if (flag == 1) //se flag for 1 indica que a operação foi realizada com sucesso e então print rb
		write(1, "rb\n", 3);
}

//Faz o rotate_a e rotate_b ao mesmo tempo
void	ra_rb(t_stack **list_a, t_stack **list_b)
{
	rotate_a(list_a, 0);
	rotate_b(list_b, 0);
	write(1, "rr\n", 3);
}
