/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:02:34 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/29 17:28:45 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *list_a = NULL;
    t_stack *list_b = NULL;
    //t_stack *current;

	if (ac < 2)
        ft_error("Error\n", list_a);
    //start_validations(list);
    create_list(&list_a, ac, av);
    ft_printf("Initial list A\n");
    print_list(&list_a);
    algoritm(&list_a, &list_b);
}