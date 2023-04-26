/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:26:12 by jenny             #+#    #+#             */
/*   Updated: 2023/04/26 20:28:43 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void create_list(t_stack **list, int ac, char **av) 
{
    int i;
	int	number;

	i = 1;
    while (i < ac) 
    {
		number = ft_atoi(av[i]);
        add_back(list, ft_lstnew(number));
		i++;
    }
}

void	print_list(t_stack **head)
{
	t_stack *current;

	current = *head;
	while (current != NULL)
	{
		ft_printf("%d\n", current->value);	
		current = current->next;
	}
}
