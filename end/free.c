/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:01:56 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/01 21:27:57 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack **list)
{
	t_stack	*tmp;

	tmp = NULL;
	while (*list)
	{
		tmp = (*list)->next;
		free(*list);
		*list = NULL;
		if (tmp == NULL)
			break ;
		*list = tmp;
	}
}
