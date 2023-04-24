/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:38:32 by jede-ara          #+#    #+#             */
/*   Updated: 2023/04/24 15:14:43 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack **head)
{
	t_stack *current;

	current = *head;
	while (current != NULL)
	{
		printf("%d\n", current->value);	
		current = current->next;
	}
}


int	main(int ac, char **av)
{
	t_stack	*stack_a;
	//t_stack	*stack_b;

	stack_a = ft_lstnew(atoi(av[1]));
	//stack_b = NULL;
	if (ac < 2)
		return (0);
	/*if (stack_a == NULL)
	{
		write(1, "Stack A is empty\n", 17);
	}*/
	add_back(&stack_a, ft_lstnew(atoi(av[2])));
	add_back(&stack_a, ft_lstnew(atoi(av[3])));
	
	rotate_a(&stack_a, 1);
	print_list(&stack_a);
	//rotate_b(&stack_a, 1);
	//ra_rb(&stack_a, &stack_b);
	swap_a(&stack_a, 1);
	//swap_b(&stack_a, 1);
	//sa_sb(&stack_a, &stack_b);
	return (0);
}

