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
		return (0);
	create_list(&list_a, ac, av);
	algoritm(&list_a, &list_b);
	free_stack(&list_a);
	free_stack(&list_b);
}
