/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:11:59 by jenny             #+#    #+#             */
/*   Updated: 2023/04/21 13:12:43 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = NULL;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = NULL;
		if (tmp == NULL)
			break ;
		*stack = tmp;
	}
}
