/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:26:12 by jenny             #+#    #+#             */
/*   Updated: 2023/06/01 21:51:21 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	create_list(t_stack **list, int ac, char **av)
{
	int	i;
	int	number;
	int	index;

	index = 0;
	i = 1;
	while (i < ac)
	{
		number = ft_atoi(av[i]);
		is_int(number, *list);
		check_number(av[i], *list);
		add_back(list, ft_lstnew(number, index));
		i++;
		index++;
	}
}

void	print_list(t_stack **head)
{
	t_stack	*current;

	current = *head;
	while (current != NULL)
	{
		ft_printf("%d (%d)\n", current->value, current->index);
		current = current->next;
	}
}
