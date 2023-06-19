/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:02:34 by jede-ara          #+#    #+#             */
/*   Updated: 2023/06/12 14:32:36 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*list_a;
	t_stack	*list_b;

	list_a = NULL;
	list_b = NULL;
	if (ac < 2)
		ft_error("Error\n", list_a);
	create_list(&list_a, ac, av);
	start_validations(list_a);
	//ft_printf("Antes do algoritmo\n");
	//print_list(&list_a);
	algoritm(&list_a, &list_b);
	//printf("Depois do algoritmo\n");
	//print_list(&list_a);
	free_stack(&list_a);
	free_stack(&list_b);
}
./push_swap 62 65 55 31 4 26 72 7 90 56 84 89 41 29 52 18 16 91 86 53