/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:43:40 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/24 18:59:23 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algoritm(t_stack **list_a, t_stack **list_b)
{
	/*while (stack_size(list_a) > 3)
	{
		find_element_with_less_operations(list_a, list_b);
		push_b(&list_a, &list_b);
	}*/
	if (stack_size(*list_a) == 3 && !is_ordered(*list_a))
	{
		ft_printf("entra aqui\n");
		sorting_three(list_a);
	}
	print_list(list_a);
	//manda p stack a
	//push_a(&list_a, &list_b);
	//rotacao final da stack a
	//if (stack_size(list_b) == 0)
	//	return ;
	//final, dps
}
