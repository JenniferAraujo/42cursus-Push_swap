/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:34:09 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/10 19:18:14 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*Desloca para baixo todos os elementos da pilha a em 1. O último elemento
torna-se o primeiro.*/
void	reverse_rotate_a(t_stack **list_a)
{
	t_stack	*tmp;
	t_stack	*new;

	if ((*list_a)->next == NULL)
		return ;
	tmp = *list_a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new = ft_lstnew(tmp->value, 0);
	new->flag = tmp->flag;
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
	add_back(&new, *list_a);
	*list_a = new;
	change_index_positive(*list_a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack **list_b)
{
	t_stack	*tmp;
	t_stack	*new;

	if ((*list_b)->next == NULL)
		return ;
	tmp = *list_b;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new = ft_lstnew(tmp->value, 0);
	new->flag = tmp->flag;
	tmp = *list_b;
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
	add_back(&new, *list_b);
	*list_b = new;
	change_index_positive(*list_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **list_a, t_stack **list_b)
{
	reverse_rotate_a(list_a);
	reverse_rotate_b(list_b);
	ft_printf("rrr\n");
}
