/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:34:09 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/01 16:04:31 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(t_stack **list_a, int flag)
{
	t_stack	*tmp;
	t_stack	*new;

	tmp = *list_a;
	new = NULL;
	if ((*list_a)->next == NULL)
		return ;
	while (tmp->next != NULL)
	{
		if ((tmp->next)->next == NULL)
		{
			new = ft_lstnew(tmp->next->value, 0);
			new->flag = tmp->next->flag;
			free(tmp->next);
			tmp->next = NULL;
		}
		else
			tmp = tmp->next;
	}
	add_back(&new, *list_a);
	*list_a = new;
	change_index_positive(list_a);
	if (flag == 1)
		ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack **list_b, int flag)
{
	t_stack	*tmp;
	t_stack	*new;

	tmp = *list_b;
	new = NULL;
	if ((*list_b)->next == NULL)
		return ;
	while (tmp->next != NULL)
	{
		if ((tmp->next)->next == NULL)
		{
			new = ft_lstnew(tmp->next->value, 0);
			new->flag = tmp->next->flag;
			free(tmp->next);
			tmp->next = NULL;
		}
		else
			tmp = tmp->next;
	}
	add_back(&new, *list_b);
	*list_b = new;
	change_index_positive(list_b);
	if (flag == 1)
		ft_printf("rrb\n");
}

void	rrr(t_stack **list_a, t_stack **list_b)
{
	reverse_rotate_a(list_a, 0);
	reverse_rotate_b(list_b, 0);
	ft_printf("rrr\n");
}
