/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:02:34 by jede-ara          #+#    #+#             */
/*   Updated: 2023/05/24 21:48:39 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
   // int size;
    t_stack *list_a = NULL;
    //t_stack *list_b = NULL;
    
	if (ac < 2)
        ft_error("Error\n", list_a);
    //start_validations(list);
    //sorting_three(list_a);
    create_list(&list_a, ac, av);
    //sorting_three(&list);
    //print_list(&list_a);
    if (stack_size(list_a) == 3 && is_ordered(list_a))
	    sorting_three(&list_a);
   else 
        ft_error("Error", list_a);
    //algoritm(&list_a, &list_b);
    print_list(&list_a);
    //size = stack_size(list_a);
   // ft_printf("o tamanho da lista: %d\n", size);
   /*if (stack_size(list_a) == 3 && !is_ordered(list_a))
	{
		ft_printf("entra aqui\n");
		sorting_three(&list_a);
	}*/
    ft_printf("PRINT FINAL\n");
    print_list(&list_a);
}

