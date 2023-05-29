/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:43:40 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/29 20:19:16 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algoritm(t_stack **list_a, t_stack **list_b)
{
	t_stack	*current;
	if (stack_size(list_a) > 3)
	{
		push_b(list_a, list_b);
		if (stack_size(list_a) > 4)
		{
			push_b(list_a, list_b);
			ft_printf("\n");
		}
	}
	ft_printf("LISTA B\n");
	print_list(list_b);
	ft_printf("LISTA A\n");
	print_list(list_a);
	ft_printf("\n\n\n");
	
	while (stack_size(list_a) > 3)
	{
		ft_printf("FIND ELEMENT DEBUG\n");
		current = find_element_with_less_operations(list_a, list_b);
		ft_printf("THE CHOOSEN ONE: %d\n", current->value);
		send_b(current, list_a, list_b);
		push_b(list_a, list_b);
		ft_printf("LISTA B\n");
		print_list(list_b);
		ft_printf("LISTA A\n");
		print_list(list_a);
		ft_printf("\n\n\n");
		//ft_printf("oi");
	}
	
	/*ft_printf("\nMandando os outros para a lista B:\n");
	print_list(list_b);
	ft_printf("\nDepois de mandar os dois primeiros, a lista A: \n");
	print_list(list_a);
	ft_printf("\nA lista A\n");
	print_list(list_a);*/
	//if (stack_size(list_a) == 3 && is_ordered(*list_a))
	//	sorting_three(list_a);
	//send_a
	//ft_printf("\nQuando restam apenas 3 numeros na lista A\n");
	//print_list(list_a);
	//ft_printf("\nlista B final:\n");
	//print_list(list_b);
}

