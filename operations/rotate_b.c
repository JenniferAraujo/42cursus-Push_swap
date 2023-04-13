/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:38:03 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/13 17:49:53 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
