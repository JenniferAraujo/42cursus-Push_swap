/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:38:32 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/13 18:02:27 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac < 3)
		return (0);
	stack_a = ft_lstnew(atoi(av[1]));
	stack_b = NULL;
	add_back(&stack_a, ft_lstnew(atoi(av[2])));
	add_back(&stack_a, ft_lstnew(atoi(av[3])));

	rotate_a(&stack_a, 1);
	rotate_b(&stack_a, 1);
	ra_rb(&stack_a, &stack_b);
	swap_a(&stack_a, 1);
	swap_b(&stack_a, 1);
	sa_sb(&stack_a, &stack_b);
	return (0);
}

