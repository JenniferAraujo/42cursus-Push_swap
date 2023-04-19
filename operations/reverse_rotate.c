/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:34:09 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/18 15:15:38 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Desloca para baixo todos os elementos da pilha a em 1. O último elemento torna-se o primeiro.
void	reverse_rotate_a(t_stack **list_a, int flag)
{
	t_stack	*tmp; //ponteiros para os nós da lista
	t_stack	*new;

	if ((*list_a)->next == NULL)// Verifica se a lista tem pelo menos dois elementos
		return ;
	
	// Encontra o último nó da lista e cria um novo nó com o valor dele
	tmp = *list_a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new = ft_lstnew(tmp->value);
	new->flag = tmp->flag;

	// Remove o último nó da lista original
	tmp = *list_a;
	while (tmp->next != NULL)
	{
		if ((tmp->next)->next == NULL)
		{
			free(tmp->next);
			tmp->next = NULL;
		}
		else
			tmp = tmp->next;
	}
	// adiciona o novo nó no final da lista
	add_back(&new, *list_a);
	*list_a = new;
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_stack **list_b, int flag)
{
	t_stack *tmp;
	t_stack *new;

	if ((*list_b)->next == NULL)
		return ;
	tmp = *list_b;
	while(tmp->next != NULL)
		tmp = tmp->next;
	new = ft_lstnew(tmp->value);
	new->flag = tmp->flag;
	tmp = *list_b;
	while(tmp->next != NULL)
	{
		if((tmp->next)->next == NULL)
		{
			free(tmp->next);
			tmp->next = NULL;
		}
		else
			tmp = tmp->next;
	}
	add_back(&new, *list_b);
	*list_b = new;
	if(flag == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **list_a, t_stack **list_b)
{
	reverse_rotate_a(list_a, 0);
	reverse_rotate_b(list_b, 0);
	write(1, "rrr\n", 4);
}
